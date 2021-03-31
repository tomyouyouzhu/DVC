#include <iostream>
#include <cstdlib>

using namespace std;

#define TESTNUM 10
#define RANGE   100

struct node {
    struct node *left;
    struct node *right;
    int val;
};

typedef enum {
    INORDER, 
    PREORDER,
    POSTORDER
} traversalType;

node *tree;
int nums[TESTNUM];

int addNode(int val) {

    node **curnode;
    node *tnode;
    int cmp = 0;

    node *anode = new node;
    anode->left = anode->right = 0;
    anode->val = val;

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
        if (val > tnode->val)
            curnode = &tnode->right;
        else
            curnode = &tnode->left;
    }
    cout << "Error adding!" << endl;
    return (0);
}

int lookupNode(int val) {

    node *curnode = tree;
    int cmps = 0;

    while (curnode != 0) {
        cmps++;
        if (val == curnode->val)
            return cmps;
        if (val > curnode->val)
            curnode = curnode->right;
        else
            curnode = curnode->left;
    }
    return -1;
}

void testAdd() {
    int cmps;
    srand(time(0));
    for (int i = 0; i < TESTNUM; i++) {
        int r = rand() % RANGE + 1;
        cmps = addNode(r);
        nums[i] = r;
        cout << "Inserted value: " << r << " - " << cmps << " comparisons" << endl;
    }
}

void testFind() {
    int cmps = 0;
    for (int i = 0; i < TESTNUM; i++) {
       if ((cmps = lookupNode(nums[i])) != -1)
           cout << "Found value: " << nums[i] << " - " << cmps << " comparisons" << endl;
       else
           cout << "Didn't find value: " << nums[i] << endl;
   }
}

void traverse(node *n, traversalType t) {
    switch (t) {
        case INORDER:
            if (n->left !=0)
                traverse (n->left, t);
            cout <<n->val <<" ";
            if (n->right !=0)
                traverse (n->right, t);
            break;
        case PREORDER:
            cout <<n->val <<" ";
            if (n->left !=0)
                traverse (n->left, t);
            if (n->right !=0)
                traverse (n->right, t);
            break;
        case POSTORDER:
            if (n->left !=0)
                traverse (n->left, t);
            if (n->right !=0)
                traverse (n->right, t);
            cout <<n->val <<" ";
            break;
    }
}

void printTree (node *n) {
    if (n==0)
        return;
    cout << "Value: "<< n->val <<endl;
    if (n->left !=0)
        cout << "\tleft child: "<<n->left->val <<endl;
    else 
        cout << "\tleft child: NULL" << endl;
    if (n->right !=0)
        cout << "\tright child: "<<n->right->val <<endl;
    else 
        cout << "\tright child: NULL" << endl;
    printTree(n->left);
    printTree(n->right);
}

int main()
{
    testAdd();
    testFind();
    cout << "Inorder traversal: "<<endl;
    traverse(tree, INORDER);
    cout << endl;
    cout << "Pre-order traversal: "<<endl;
    traverse(tree, PREORDER);
    cout << endl;
    cout << "Post-order traversal: "<<endl;
    traverse(tree, POSTORDER);
    cout << endl;
    printTree(tree);
    cout << "done" << endl;
}
