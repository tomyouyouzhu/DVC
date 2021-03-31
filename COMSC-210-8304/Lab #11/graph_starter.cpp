#include <fstream>
#include <iostream>
#include <sstream>
#include <list>
#include <vector>
#include <map>
#include <iomanip>
#include <cstdlib>
#include <queue>
using namespace std;

#define MAX_EDGES   5

// output if there is a direct route between two cities and its cost

struct cityNode {
    vector<string> neighbors;
    vector<int> distances;
    bool visited;
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

void DFS(map<string, cityNode> &graph, string from) {
    cityNode tmpNode;
    queue <string> q;
    string curCity;
    q.push(from);
    while (!q.empty()) {
        curCity = q.front();
        q.pop();
        tmpNode = graph[curCity];
        if (tmpNode.visited)
            continue;
        cout << "Visited: " << curCity << endl;
        
        //update the graph
        tmpNode.visited = true;
        graph[curCity] = tmpNode;
        
        for (int i = 0; i < tmpNode.neighbors.size(); i++) {
            cityNode newNode;
            string neighborCity = tmpNode.neighbors[i];
            newNode = graph[neighborCity];
            if (newNode.visited)
                continue;
            q.push(neighborCity);
        }
    }
}
int main() {
    ifstream inFile(FILENAME);
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
        graph[row[0]].distances.push_back(atoi(row[2].c_str()));

        // this creates the TO city if not there,
        // adds edge from the other direction (bidirectional)
        graph[row[1]].neighbors.push_back(row[0]);
        graph[row[1]].distances.push_back(atoi(row[2].c_str()));

        // Initialize the visited state
        graph[row[0]].visited = false;
    }

    map<string, cityNode>::iterator it;
    for (it = graph.begin(); it != graph.end(); it++) {
            cout << "city: " << it->first << endl;
            cityNode c = it->second;
            cout << "visited: " << c.visited << endl;
            cout << "\t" << "neighbors: " << endl;
            for (int i = 0; i < c.neighbors.size(); i++) {
                cout << "\t\t" << c.neighbors[i] << " cost: " << c.distances[i] << endl;
            }
     }

    for (;;) {
        cout << endl << "Enter the FROM city name (X to quit): ";
        getline(cin, from);
        if (IS_QUIT(from))
            break;
        if (graph.count(from) == 0) {
            cout << "Invalid starting point.";
            continue;
        }
        cout << "Depth first search: " << endl;
        cout << from << endl;
        //do the breadth searching first
        DFS(graph, from);
        // Your recursive function call may look like this -- other
        // methods possible
        // dfs(graph, graph[from]);
    }
    cout << "Exiting..." << endl;
}