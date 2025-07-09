#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int integerValue;
    Node *nextPointer;

    Node(int integerValue)
    {
        this->integerValue = integerValue;
        this->nextPointer = NULL;
    }
};

void detectCycle(Node *head)
{
    Node *speed = head;
    Node *slow = head;

    while (speed->nextPointer != NULL)
    {
        if (speed == slow && slow != head && speed != head)
        {
            cout << "There is a cycle in this linked list" << endl;
            return;
        }

        speed = speed->nextPointer->nextPointer;
        slow = slow->nextPointer;
    }

    cout << "There is no cycle in this linked list" << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *secondNode = new Node(20);
    Node *thirdNode = new Node(30);
    Node *fourthNode = new Node(40);
    Node *tail = new Node(50);

    head->nextPointer = secondNode;
    secondNode->nextPointer = thirdNode;
    thirdNode->nextPointer = fourthNode;
    fourthNode->nextPointer = tail;
    tail->nextPointer = secondNode;

    detectCycle(head);

    return 0;
}