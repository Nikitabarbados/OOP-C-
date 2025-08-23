#include <iostream>
using namespace std;

struct Element
{
    int value;
    int priority;
};

// Кастомний масив
class Array
{
    Element* data;
    unsigned int capacity;
    unsigned int count;

public:
    Array(unsigned int capacity)
    {
        this->capacity = capacity;
        this->count = 0;
        data = new Element[capacity];
    }

    ~Array()
    {
        delete[] data;
    }

    int Size() const
    {
        return count;
    }

    Element& Get(int index)
    {
        return data[index];
    }

    void Insert(Element elem, int index)
    {
        if (count >= capacity) return; // немає місця
        if (index < 0) index = 0;
        if (index > count) index = count;

        for (int i = count; i > index; i--)
        {
            data[i] = data[i - 1];
        }
        data[index] = elem;
        count++;
    }

    void RemoveAt(int index)
    {
        if (index < 0 || index >= count) return;
        for (int i = index; i < count - 1; i++)
        {
            data[i] = data[i + 1];
        }
        count--;
    }

    void Print()
    {
        cout << "--------------------------------\n";
        for (int i = 0; i < count; i++)
        {
            cout << "(" << data[i].value << ", pr:" << data[i].priority << ") ";
        }
        cout << "\n--------------------------------\n";
    }
};

// Черга з пріоритетом
class PriorityQueue
{
    Array arr;

public:
    PriorityQueue(int capacity) : arr(capacity) {}

    void Enqueue(int value, int priority)
    {
        Element elem{ value, priority };

        // шукаємо місце для вставки (за спаданням пріоритету)
        int i = 0;
        while (i < arr.Size() && arr.Get(i).priority >= priority)
        {
            i++;
        }
        arr.Insert(elem, i);
    }

    int Dequeue()
    {
        if (arr.Size() == 0)
        {
            throw "Queue is empty!";
        }
        int val = arr.Get(0).value;
        arr.RemoveAt(0);
        return val;
    }

    void Print()
    {
        arr.Print();
    }
};

int main()
{
    PriorityQueue pq(10);

    pq.Enqueue(10, 1);
    pq.Enqueue(20, 3);
    pq.Enqueue(30, 2);
    pq.Enqueue(40, 5);

    pq.Print();

    cout << "Dequeued: " << pq.Dequeue() << "\n";
    pq.Print();
}
