#include<iostream>
using namespace std;

// Class definition for Node
class node {
public:
    node* next;
    int data;
    node(int data) {
        this->data = data;
        next = nullptr;
    }
};

// Function prototypes
void insertAtEnd(node*& head, node*& tail, int data);
void deleteAtFront(node*& head);
int lengthOfLL(node* head, node* tail);

// Class definition for Queue
class queue {
private:
    node* head;
    node* tail;
public:
    // Constructor
    queue() {
        head = nullptr;
        tail = nullptr;
    }

    // Function to push data into the queue
    void push(int data) {
        insertAtEnd(head, tail, data);
    }

    // Function to pop data from the queue
    void pop() {
        if (head == nullptr) {
            cout << "Queue is empty. Cannot pop." << endl;
            return;
        }
        deleteAtFront(head);
    }

    // Function to get the size of the queue
    int size() {
        return lengthOfLL(head, tail);
    }

    // Function to check if the queue is empty
    bool empty() {
        return head == nullptr;
    }

    // Function to get the front element of the queue
    int peek() {
        if (head == nullptr) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return head->data;
    }
};

// Function to insert a node at the end of the linked list
void insertAtEnd(node*& head, node*& tail, int data) {
    if (head == nullptr) {
        head = new node(data);
        tail = head;
    } else {
        tail->next = new node(data);
        tail = tail->next;
    }
}

// Function to delete a node from the front of the linked list
void deleteAtFront(node*& head) {
    if (head == nullptr) {
        cout << "List is empty. Cannot delete." << endl;
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}

// Function to calculate the length of the linked list
int lengthOfLL(node* head, node* tail) {
    int count = 0;
    while (head != nullptr) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Empty: " << q.empty() << endl;
    cout << "Front element: " << q.peek() << endl;
    cout << "Size: " << q.size() << endl;

    q.pop();
    q.pop();

    cout << "Empty: " << q.empty() << endl;
    cout << "Front element: " << q.peek() << endl;
    cout << "Size: " << q.size() << endl;

    return 0;
}
