/*
 * This header file implements a simple (template) 'bag' of items with a fixed
 * capacity.
 */

#ifndef SORTABLE_BAG_
#define SORTABLE_BAG_
using namespace std;
#include <vector>
template<class ItemType>
class SortableBag {
private:
    static const int DEFAULT_CAPACITY = 1000;// Default bag size
    ItemType items[DEFAULT_CAPACITY];       // Array of bag items
    int itemCount;                          // Current count of bag items 
    int maxItems;                           // Max capacity of the bag
   
    // Returns either the index of the element in the array items that
    // contains the given target or -1, if the array does not contain 
    // the target.
    int getIndexOf(const ItemType& target) const;   

public:
    SortableBag();
    SortableBag(int ,int );
    int getCurrentSize() const;
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry);
    void clear();
    bool contains(const ItemType& anEntry) const;
    std::vector<ItemType> toVector() const;
    void sort();
};

// Default constructor implementation
template<class ItemType>
SortableBag<ItemType>::SortableBag(): itemCount(0), maxItems(DEFAULT_CAPACITY) {
    // the default constructor initializes itemCount and maxItems above
}


// Return the number of items currently in the bag
template<class ItemType>
int SortableBag<ItemType>::getCurrentSize() const {
    return itemCount;
}

// Return whether the bag is currently empty
template<class ItemType>
bool SortableBag<ItemType>::isEmpty() const {
    return itemCount == 0;
}

// Adds a new item to the bag, returning whether there was space (false
// if the add failed)
template<class ItemType>
bool SortableBag<ItemType>::add(const ItemType& newEntry)
{
    bool hasRoomToAdd = (itemCount < maxItems);
    if (hasRoomToAdd) {
        items[itemCount] = newEntry;
        itemCount++;
    }
    
    return hasRoomToAdd;
}

// Removes an item, returning whether the item was successfully removed. 
template<class ItemType>
bool SortableBag<ItemType>::remove(const ItemType& anEntry) {
    int locatedIndex = getIndexOf(anEntry);
    bool canRemoveItem = !isEmpty() && (locatedIndex > -1);
    if (canRemoveItem) {
        itemCount--;
        items[locatedIndex] = items[itemCount];
    }
    
    return canRemoveItem;
}


// Resets the number of items held in the bag.  The data values are NOT
// cleared.
template<class ItemType>
void SortableBag<ItemType>::clear() {
    itemCount = 0;
}

// Returns whether or not the bag holds a value.
template<class ItemType>
bool SortableBag<ItemType>::contains(const ItemType& anEntry) const {
    return getIndexOf(anEntry) > -1;
}

// Returns a std::vector resulting from the conversion of the bag storage.
template<class ItemType>
std::vector<ItemType> SortableBag<ItemType>::toVector() const {
   std::vector<ItemType> bagContents;
	for (int i = 0; i < itemCount; i++)
		bagContents.push_back(items[i]);
      
   return bagContents;
}

// This is a private method for obtaining the index of an entry, or -1
// if it does not exist in the bag.
template<class ItemType>
int SortableBag<ItemType>::getIndexOf(const ItemType& target) const {
    bool found = false;
   int result = -1;
   int searchIndex = 0;
   
   // If the bag is empty, itemCount is zero, so loop is skipped
   while (!found && (searchIndex < itemCount)) {
      if (items[searchIndex] == target) {
         found = true;
         result = searchIndex;
      } else {
         searchIndex++;
      } 
   }
   
   return result;
}

template<class ItemType>
void SortableBag<ItemType>::sort()
{
  int size=getCurrentSize();
  ItemType temp;
  for (int i=0; i<size; i++)
  {
    for (int j=i+1; j<size; j++)
    {
      if (items[i]>items[j])
      {
        temp=items[j];
        items[j]=items[i];
        items[i]=temp;
      }
    }
  }
}
#endif
