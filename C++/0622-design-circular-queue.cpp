class Node
{
public:
    int val;
    Node next;
    Node(int value)
    {
        this->val = value;
    }
};
class MyCircularQueue
{
private:
    Node head = new Node(-1);
    Node tail = head;
    int maxsize = 0;
    int size = 0;

public:
    MyCircularQueue(int k)
    {
        this->maxsize = k;
    }

    bool enQueue(int value)
    {
        if (this->isFull())
            return false;
        this->tail->next = new Node(value);
        this->tail = this->tail->next;
        this->size++;
        return true;
    }

    bool deQueue()
    {
        if (this->isEmpty())
            return false;
        if (this->head->next == this->tail)
        {
            this->tail = this->head;
            this->head->next = NULL;
        }
        else
        {
            this->head->next = this->head->next->next;
        }
        this->size--;
        return true;
    }

    int Front()
    {
        if (this->isEmpty())
            return false;
        return this->head->next->val;
    }

    int Rear()
    {
        if (this->isEmpty())
            return false;
        return this->tail->val;
    }

    bool isEmpty()
    {
        return this->size == 0;
    }

    bool isFull()
    {
        return (this->size == this->maxsize);
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */