#include <iostream>
using namespace std;

// Class for Queue
class Queue
{
    private:
        int head, tail;

    public:
        Queue()
        {
            head = -1;
            tail = -1;
        }

        void enqueue(int x);
        int dequeue();
        bool isEmpty();
};

// Function to add an item to the queue.
void Queue::enqueue(int x)
{
    if (tail == -1)
    {
        head = 0;
        tail = 0;
    }
    else
        tail++;

    cout << "Enqueued item is " << x << endl;
}

// Function to remove an item from queue.
int Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Underflow\n";
        return -1;
    }

    int x = head;

    if (head == tail)
    {
        head = -1;
        tail = -1;
    }
    else
        head++;

    cout << "Dequeued item is " << x << endl;
    return x;
}

// Function to check if the queue is empty or not.
bool Queue::isEmpty()
{
    if (head == -1 && tail == -1)
        return true;
    else
        return false;
}

// Main function
int main()
{
    Queue q;

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);

    q.dequeue();
    q.dequeue();

    q.enqueue(4);

    q.dequeue();
    q.dequeue();

    if (q.isEmpty())
        cout << "Queue is empty";
    else
        cout << "Queue is not empty";

    return 0;
}
