#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* previous;

    Node(int data) {
        this->data = data;
        next = nullptr;
        previous = nullptr;
    }
};

int main() {
    int nodes;
    int value;

    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter number of nodes: ";
    cin >> nodes;


    for (int i = 0; i < nodes; i++) {
        cin >> value;

        Node* newnode = new Node(value);

        if (head == nullptr) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            newnode->previous = tail;
            tail = newnode;
        }
    }

    
    cout << "\nLinked List:\n";
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n\nNow we have to remove the nth node from the end.\n";
    cout << "Enter n: ";
    int n;
    cin >> n;

   
    if (n <= 0 || n > nodes) {
        cout << "Invalid value of n." << endl;
        return 0;
    }

    
    Node* temp2 = tail;

    for (int i = 1; i < n; i++) {
        temp2 = temp2->previous;
    }

    
    if (temp2 == head && temp2 == tail) {
       
        head = nullptr;
        tail = nullptr;
    }
    else if (temp2 == head) {
        
        head = head->next;
        head->previous = nullptr;
    }
    else if (temp2 == tail) {
        
        tail = tail->previous;
        tail->next = nullptr;
    }
    else {
        temp2->previous->next = temp2->next;
        temp2->next->previous = temp2->previous;
    }

    delete temp2;


    cout << "\nUpdated Linked List:\n";

    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}