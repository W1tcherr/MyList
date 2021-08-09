
template<class T>
class myList
{
public:
	myList() : head(nullptr), size(0) {}
	~myList();

	void push_back(T data);

	int GetSize();

	T& operator[](int index);

	void pop_front();

	void clear();

	void push_front(T data);

	void pop_back();

	void insert(T data, int index);

	void removeAt(int index);

private:
	class Node
	{
	public:
		Node(T data = T(), Node* nNext = nullptr) : data(data), nodeNext(nNext) {}

		Node* nodeNext = nullptr;
		T data;
	};

	Node* head;
	int size;
};


template<class T>
myList<T>::~myList()
{
	clear();
}

template<class T>
void myList<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = head;
		while (current->nodeNext != nullptr)
		{
			current = current->nodeNext;
		}
		current->nodeNext = new Node(data);
	}
	size++;
}

template<class T>
int myList<T>::GetSize()
{
	return size;
}

template<class T>
T& myList<T>::operator[](const int index)
{
	Node* current = head;
	for (int i = 0; i < index; i++)
	{
		current = current->nodeNext;
	}
	return current->data;
}

template<class T>
void myList<T>::pop_front()
{
	Node* temp = head;
	head = head->nodeNext;
	delete temp;
	size--;
}

template<class T>
void myList<T>::clear()
{
	while (size)
	{
		pop_front();
	}
}

template<class T>
void myList<T>::push_front(T data)
{
	head = new Node(data, head);
	size++;
}

template<class T>
void myList<T>::pop_back()
{
	if (head == nullptr)
	{
		std::cout << "List is empty.\n";
	}
	else if (size == 1)
	{
		delete head;
		head = nullptr;
		size--;
	}
	else
	{
		Node* previous = head;
		for (int i = 0; i < size - 2; i++)
		{
			previous = previous->nodeNext;
		}
		delete previous->nodeNext;
		previous->nodeNext = nullptr;
		size--;
	}
}

template<class T>
void myList<T>::insert(T data, int index)
{
	if (index == 0)
	{
		push_front(data);
	}
	else
	{
		Node* previous = head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->nodeNext;
		}
		previous->nodeNext = new Node(data, previous->nodeNext);
		size++;
	}
}

template<class T>
inline void myList<T>::removeAt(int index)
{
	if (index == 0)
	{
		pop_front();
	}
	else
	{
		Node* previous = head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->nodeNext;
		}
		Node* toDellete = previous->nodeNext;
		previous->nodeNext = toDellete->nodeNext;
		delete toDellete;
		size--;
	}
}
