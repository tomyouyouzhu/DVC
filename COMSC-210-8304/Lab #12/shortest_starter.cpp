#include <fstream>
#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <map>
#include <iomanip>
#include <queue>
#include <stack>
using namespace std;

#define MAX_EDGES   5
#define MAX_ROUTE   25

// output if there is a direct route between two cities and its cost

struct cityNode {
    vector<string> neighbors;
    vector<int> distances;
    bool visited = false;
    int cost = -1;
    string previous;
};

struct tempNode {
    string name;
    string previous;
    int cost;
    bool operator<(const tempNode& t) const {
        return (cost > t.cost);
    }
};

#define FILENAME "cal_cities.csv"
#define IS_QUIT(s) (s == "X" || s == "x")
using namespace std;

void parse_line(const string &str,
        vector<string> &line) {
    istringstream istr(str);
    string tmp;
    while (getline(istr, tmp, ',')) {
        line.push_back(tmp);
    }
}

void computeShortestPaths(string startCity, string endCity,
        map<string, cityNode> &graph) {
    cityNode cur;
    tempNode tstart, tcur;
    priority_queue<tempNode> working;
    map<string, cityNode>::iterator ci;

    // reset all the state
    map<string, cityNode>::iterator g;
    for (g = graph.begin(); g != graph.end(); g++) {
        g->second.visited = false;
        g->second.cost = -1;
    }

    // initialize the working list
    tstart.name = startCity;
    tstart.cost = 0;
    working.push(tstart);
    while (!working.empty()) {
        //cout << "queue len " << working.size() << endl;
        tcur = working.top();
        //cout << "processing " << tcur.name << " " << tcur.cost << endl;
        ci = graph.find(tcur.name);

        // remove this element
        working.pop();

        // Remaining code

        ci->second.visited = true;
        for (int i = 0; i < ci->second.neighbors.size(); i++) {
            cur = graph.find(ci->second.neighbors[i])->second;
            if (cur.visited == true && cur.cost <= tcur.cost + ci->second.distances[i] && cur.cost != -1)
                continue;
            if (cur.cost > tcur.cost + ci->second.distances[i] || cur.cost == -1) {
                graph.find(ci->second.neighbors[i])->second.cost = tcur.cost + ci->second.distances[i];
                graph.find(ci->second.neighbors[i])->second.previous = tcur.name;
            }
            tstart.name = ci->second.neighbors[i];
            tstart.cost = graph.find(ci->second.neighbors[i])->second.cost;
            tstart.previous = tcur.name;
            //cout<<tstart.name<<" "<<tstart.cost<<" "<<tstart.previous<<endl;
            working.push(tstart);
        }
    }

}

int main() {
    ifstream inFile("cal_cities.csv");
    string inputLine, inputStr;
    map<string, cityNode> graph;
    map<string, cityNode>::iterator cmi;
    string::size_type sz;
    string to, from;
    int i;

    while (getline(inFile, inputLine)) {
        vector<string> row;
        cityNode c;
        parse_line(inputLine, row);
        graph.insert(make_pair(row[0], c));
    
        // this creates the FROM city if not there, adds edge
        graph[row[0]].neighbors.push_back(row[1]);
        graph[row[0]].distances.push_back(stoi(row[2], &sz));

        // this creates the TO city if not there,
        // adds edge from the other direction (bidirectional)
        graph[row[1]].neighbors.push_back(row[0]);
        graph[row[1]].distances.push_back(stoi(row[2], &sz));
    }
/*
    map<string, cityNode>::iterator it;
    for (it = graph.begin(); it != graph.end(); it++) {
            cout << "city: " << it->first << endl;
            cout << "best cost: " << it->second.cost << endl;
            cout << "prev: " << it->second.previous << endl;
            cout << "\t" << "neighbors: " << endl;
            cityNode c = it->second;
            for (int i = 0; i < c.neighbors.size(); i++) {
                cout << "\t\t" << c.neighbors[i] << " cost: " << c.distances[i] << endl;
            }
     }
     */

    for (;;) {
        cout << endl << "Enter the FROM city name (X to quit): ";
        getline(cin, from);
        if (IS_QUIT(from))
            break;
        cout << endl << "Enter the TO city name (X to quit): ";
        getline(cin, to);
        if (IS_QUIT(to))
            break;
        if (graph.count(to) == 0 || graph.count(from) == 0) {
            cout << "You entered at least 1 invalid city.";
            continue;
        }
        computeShortestPaths(from, to, graph);
        cityNode fromNode = graph[from];
        cityNode toNode = graph[to];
        // print out the path starting from the target, backwards
        cout << "The cheapest route is: " << toNode.cost << endl;
        cout << "via the route: " << endl;
        cout << "\t\t";
        
        tempNode tNode;
        tNode.name = to;
        tNode.previous = toNode.previous;
        stack <tempNode> j;
        j.push(tNode);
        while (tNode.name != from) {
            tNode.name = tNode.previous;
            tNode.previous = graph[tNode.name].previous;
            j.push(tNode);
        }
        while (!j.empty()) {
            cout<<j.top().name<<" ";
            j.pop();
        }
    }
    cout << "Exiting..." << endl;
}
