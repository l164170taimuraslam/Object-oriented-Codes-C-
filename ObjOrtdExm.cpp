# include <iostream>
using namespace std;
template<class elemType> class listType
{
private:
   elemType *list;
   int length;
   int maxSize;
public:
	listType(int size = 10);
//Constructor. Creates an array of size specified by the parameter, its default value is 10.

~listType();
//Destructor. Deallocate the memory occupied by the list.

bool isEmpty();
//Function to determine whether the list is empty.  Returns true if the list is empty; otherwise returns false.

bool isFull();
//Function to determine whether the list is full.  Returns true if the list is full; otherwise returns false.

int listSize();
//Function to determine the number of elements in the list. Returns the value of length.

int maxListSize();
//Function to determine the maximum size of the list. Returns the value of maxSize.

void print();
//Function to output the elements of the list.

void insert(const elemType& insertItem);
//Function to insert value  of insertItem at the end of the list. Update the length of list after insertion.

void sort();
//Function to sort the list in ascending order.

void remove(elemType& removeItem);
//Function to remove an item from the end of the list. Return the removed item in removeItem parameter. Update the length after //removing.

int seqSearch(const elemType& item);
};

template <class elemType>
listType<elemType> :: listType (int size)
{
	if(size < 0)
	{
		cout << "Size can never be negative\n";
	}
	else if (size>0 && size <10)
	{
		maxSize=10;
		cout << "Size is 10";
	}
	length =0;
	list new elemType[maxSize];
}

template <class elemType>
listType<elemType> :: ~listType()
{
	delete []list;
}

template <class elemType>
bool listType<elemType> :: isEmpty()
{
	return(length == 0);
}


template <class elemType>
bool listType<elemType> :: isFull()
{
	return (length = maxSize);
}

template <class elemType>
int listType<elemType> :: listSize()
{
	return length;
}

template <class elemType>
int listType<elemType> :: maxListSize()
{
	return maxSize;
}

template <class elemType>
void listType<elemType> :: print()
{
	for(int i=0; i< length;i++)
	{
		cout << list[i] << " "; 
	}
}

template <class elemType>
void listType<elemType> :: insert(const elemType& insertItem)
{
	if(length==0)
	{
		list[size++] = insertItem;
	}

	else if(length==maxSize)
	{
		cout << "There is no space to insert the item!\n";
	}

	else
	{
		if(length == maxSize)
		{
			cout<<"Cannot insert in a full list."<<endl;
		}
		else
		{
			loc = seqSearch(insertItem);

			if(loc == -1)   //the item to be inserted
			{
				list[length++] = insertItem;
			}

			else
			{
				cout <<"the item to be inserted is already in " <<"the list. No duplicates are allowed."<<endl;
			}

	    }
     }
}

template <class elemType>
void listType<elemType> :: sort()
{
	int temp=0;
	for(int i=0; i< length; i++)
	{
		for(int j=0; j < length;j++)
		{
			if (list[j] > list[j+1])
			{
				 temp=a[j];
				 list[j]=list[j+1];
				 list[j+1]=temp;
			}
		}
	}
}


template <class elemType>
void listType<elemType> :: remove(elemType& removeItem)
{
		  
int pos ;
	if(length < maxSize)
	{
		pos=length;
		list[pos]=removeItem;
		length = length-1;
		cout<<"Element inserted successfully..!!\n";
		cout<<"Now the new Array is : \n";
	
	}
	else 
	{
		cout << "List is already full"<< endl;
	}
}
}

template <class elemType>
int listType<elemType>::seqSearch(const elemType& item)
{
	int loc;
	bool found = false;

	for(loc = 0; loc < length; loc++){
	   if(list[loc] == item)
	   {
		found = true;
		break;
	   }
	}

	if(found)
		return loc;
	else
		return -1;
} 