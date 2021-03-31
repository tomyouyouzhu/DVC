#include <iostream>
#include <cstdlib>

using namespace std;

#define TESTNUM 10
#define RANGE   100

struct node {
    struct node *left;
    struct node *right;
    int key;
    int value;
};

typedef enum {
    INORDER,
    PREORDER,
    POSTORDER,
} traverseType;

node *tree;
int nums[TESTNUM];

int addNode(int key) {

    node **curnode;
    node *tnode;
    int cmp = 0;

    node *anode = new node;
    anode->left = anode->right = 0;
    anode->key = key;
    anode->value = value;

    if (tree == 0) {
        tree = anode;
        return (0);
    }

    curnode = &tree;

    for (;;) {
        if ((tnode = *curnode) == 0) {
            *curnode = anode;
            return (cmp);
        }
        cmp++;
        if (key > tnode->key)
            curnode = &tnode->right;
        else
            curnode = &tnode->left;
    }
    cout << "Error adding!" << endl;
    return (0);
}

node *lookupNode(int key, int &cmps) {

    node *curnode = tree;
    cmps = -1;

    while (curnode != 0) {
        cmps++;
        if (key == curnode->key)
                break;
        if (key > curnode->key)
            curnode = curnode->right;
        else
            curnode = curnode->left;
    }
    return curnode;
}

void testAdd() {
    int cmps;
    srand(time(0));
    for (int i = 0; i < TESTNUM; i++) {
        int r = rand() % RANGE;
        cmps = addNode(r);
        nums[i] = r;
        cout << "Inserted value: " << nums[i] << " cmps: " << cmps << endl;
    }
}

void testFind() {
     int cmps = 0;
     for (int i = 0; i < TESTNUM; i++) {
       if ((cmps = lookupNode(nums[i])) != -1)
           cout << "Found key: "
                << nums[i] << " cmps: " << cmps << endl;
       else
           cout << "Didn't find key: " << nums[i] << endl;
   }
}

void printTree(node *n, int d) {
        if (n == 0)
                return;
        cout << "key: " << n->key << endl;

        if (n->left != 0) 
                cout << "\tleft child: " << n->left->key << endl;
        else
                cout << "\tleft child: " << "NULL" << endl;

        if (n->right != 0) 
                cout << "\tright child: " << n->right->key << endl;
        else
                cout << "\tright child: " << "NULL" << endl;
        printTree(n->left, d + 1);
        printTree(n->right, d + 1);
}

void traverse(node *n, traverseType t) {

    switch(t) {
        case INORDER:
            if (n->left != 0)
                traverse(n->left, t);
            cout << n->key << " ";
            if (n->right != 0)
                traverse(n->right, t);
            break;
        case PREORDER:
            cout << n->key << " ";
            if (n->left != 0)
                traverse(n->left, t);
            if (n->right != 0)
                traverse(n->right, t);
            break;
        case POSTORDER:
            if (n->left != 0)
                traverse(n->left, t);
            if (n->right != 0)
                traverse(n->right, t);
            cout << n->key << " ";
            break;
    }
}

int main()
{

    for (;;) {
        string tmp;
        int choice;
        int key, temp;
        node * n;
        cout << "Dictionary with a BST" << endl;
        cout << "---------------------" << endl;
        cout << "1) Add" << endl;
        cout << "2) Delete" << endl;
        cout << "3) Lookup" << endl;
        cout << "4) Run the tests" << endl;
        cout << "Enter your choice (-1 to quit): ";
        getline(cin, tmp);
        choice = atoi(tmp.c_str());
        switch (choice) {
        case -1:
            cout << "Done." << endl;
            return (0);
        case 1:
            cout<<"Please enter the key: ";
            getline(cin, temp);
            key = atoi(tem.c_str());
            cout<<"Please enter the value: ";
            getline(cin, temp);
            value = atoi(tem.c_str());
            break;
        case 2:
            break;
        case 3:
            cout<<"Please enter the key: ";
            getline(cin, temp);
            if ((n = lookupNode(key, cmps) == 0))
                cout<<"Not found"<<endl;
            cout<<n->key<<endl;
            cout<<n->value<<endl;
            break;
        case 4:
            testAdd();
            testFind();
            printTree(tree, 1);
            break;
        default:
            cout << "Invalid entry." << endl;
            break;
        }
    }

    cout << "Done." << endl;
}
