class Heap
{
	private:
		int const MAX = 100;
		int size = 0;
		int * arr;
	public:
		bool isEmpty() const;
		void add(int);
		void remove();
		void clear();
		int getNumberOfNodes() const;
		int peekTop() const;
		bool isLeaf(int) const;
		bool isRoot(int) const;
		Heap();
		Heap(int arr[], int size);
		bool getParent(int) const;
		bool getLeft(int) const;
		bool getRight(int) const;
		void reBuild();
};

Heap::Heap()
{	
	arr = new int [MAX];
}
Heap::Heap(int a[], int s)
{
	size = s;
	arr = a;
	reBuild();
}
bool Heap::isEmpty() const
{
	if (size == 0)
		return true;
	return false;
}
void Heap::add(int a)
{
	size++;
	arr[size-1] = a;
	reBuild();
}
void Heap::remove()
{
	std::swap(arr[0], arr[size-1]);
	size--;
	reBuild();
}
void Heap::clear()
{
	size = 0;
}
int Heap::getNumberOfNodes() const
{
	return size;
}
int Heap::peekTop() const
{
	return arr[0];
}
bool Heap::isLeaf(int a) const
{
	if ((a*2+1)>size)
		return true; 
	return false;
}
bool Heap::isRoot(int a) const
{
	if (a == 0)
		return true;
	return false;
}
bool Heap::getParent(int a) const
{
	if ((a-1)/2 >= 0)
		return true;
	return false;
}
bool Heap::getLeft(int a) const
{
	if ((2*a+1) < size)
		return true;
	return false;
}
bool Heap::getRight(int a) const
{
	if ((2*a+2) < size)
		return true;
	return false;
}
void Heap::reBuild()
{
	for (int i = 0; i < size; i++)
	{
		if (getParent(i) && arr[(i-1)/2] < arr[i])
		{
			std::swap(arr[(i-1)/2], arr[i]);
			reBuild();
		}
		if (getLeft(i) && arr[2*i+1] > arr[i])
		{
			std::swap(arr[i],arr[2*i+1]);
			reBuild();
		}
		if (getRight(i) && arr[2*i+2] > arr[i])
		{
			std::swap(arr[i],arr[2*i+2]);
			reBuild();
		}
	}
}