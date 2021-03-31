#ifndef MY_HEAP_
#define MY_HEAP_

template<class int>
class myHeap {
private:
   // Start with a small default size
   static const int DEFAULT_CAPACITY = 24;
   int *items;

   int itemCount; // Current count of heap items
   int maxItems;  // Maximum capacity of the heap

   // Returns the array index of the left child (if exists).
   int getLeftChildIndex(const int nodeIndex) const;
   
   // Returns the array index of the right child (if exists).
   int getRightChildIndex(int nodeIndex) const;
   
   // Returns the array index of the parent node.
   int getParentIndex(int nodeIndex) const;
   
   // Tests whether this node is a leaf.
   bool isLeaf(int nodeIndex) const;
   
   // Converts a semiheap to a heap.
   void heapRebuild(int nodeIndex);
   
   // Creates a heap from an unordered array.
   void heapCreate();
   
public:
   myHeap();
   myHeap(const int someArray[], const int arraySize);
   ~myHeap();
   
   // HeapInterface Public Methods:
   bool isEmpty() const;
   int getNumberOfNodes() const;
   
   int peekTop() const;
   bool add(const int& newData);
   bool remove();
   void clear();
};

template<class int>
int myHeap<int>::getLeftChildIndex(const int nodeIndex) const {
   return (2 * nodeIndex) + 1;
}

template<class int>
int myHeap<int>::getParentIndex(const int nodeIndex) const {
   return (nodeIndex - 1) / 2;
}

template<class int>
int myHeap<int>::getRightChildIndex(const int nodeIndex) const {
   return (2 * nodeIndex) + 2;
}

template<class int>
void myHeap<int>::heapRebuild(const int subTreeNodeIndex) {
}

template<class int>
void myHeap<int>::heapCreate() {
   for (int index = itemCount / 2; index >= 0; index--) {
      heapRebuild(index);  
   }
}

// Constructor that accepts an existing array
template<class int>
myHeap<int>::
myHeap(const int someArray[], const int arraySize):
             itemCount(arraySize), maxItems(2 * arraySize) {
}

// Default constructor
template<class int>
myHeap<int>::myHeap(): itemCount(0),
        maxItems(DEFAULT_CAPACITY) {
   items = new int[DEFAULT_CAPACITY];
}

// Default destructor
template<class int>
myHeap<int>::~myHeap() {
        delete items; 
}

// Return whether the heap is empty
template<class int>
bool myHeap<int>::isEmpty() const {
   return itemCount == 0;
}

// Return the total number of nodes
template<class int>
int myHeap<int>::getNumberOfNodes() const {
   return itemCount;
}

// Remove the root of the heap and rebuild it
template<class int>
bool myHeap<int>::remove() {
}

// Clear all items (note we do not resize the array here).
template<class int>
void myHeap<int>::clear() {
   itemCount = 0;
}

// Return the value at the root of the heap
template<class int>
int myHeap<int>::peekTop() const {
   return items[0];
}

// Add a new item to the heap
template<class int>
bool myHeap<int>::add(const int& newData) {
}
#endif /* !MY_HEAP_ */
