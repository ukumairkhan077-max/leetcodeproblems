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

    int firstlinklistnodes;
    int secondlinklistnodes;
    int value;

    Node* head = nullptr;
    Node* tail = nullptr;

    Node* head2 = nullptr;
    Node* tail2 = nullptr;

    // Create First Linked List
    cout << "Enter number of nodes for first linked list: ";
    cin >> firstlinklistnodes;

    for (int i = 0; i < firstlinklistnodes; i++) {

        cout << "Enter value of node " << i + 1 << ": ";
        cin >> value;

        Node* newnode = new Node(value);

        if (head == nullptr) {
            head = newnode;
            tail = newnode;
        }
        else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    // Print First Linked List
    cout << "\nFirst Linked List: ";

    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    // Create Second Linked List
    cout << "\nEnter number of nodes for second linked list: ";
    cin >> secondlinklistnodes;

    for (int i = 0; i < secondlinklistnodes; i++) {

        cout << "Enter value of node " << i + 1 << ": ";
        cin >> value;

        Node* newnode = new Node(value);

        if (head2 == nullptr) {
            head2 = newnode;
            tail2 = newnode;
        }
        else {
            tail2->next = newnode;
            tail2 = newnode;
        }
    }

    // Print Second Linked List
    cout << "\nSecond Linked List: ";

    Node* temp2 = head2;

    while (temp2 != nullptr) {
        cout << temp2->data << " ";
        temp2 = temp2->next;
    }

    cout << endl;

    // Add Corresponding Nodes
    cout << "\nSum of corresponding nodes: ";

    Node* temp1 = head;
    temp2 = head2;

    while (temp1 != nullptr && temp2 != nullptr) {
        cout << temp1->data + temp2->data << " ";

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    cout << endl;

    return 0;
}