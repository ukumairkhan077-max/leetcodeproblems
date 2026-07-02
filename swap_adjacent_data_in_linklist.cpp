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
    cout << "Enter number of nodes: ";
    cin >> nodes;

    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter the values:\n";

    for (int i = 0; i < nodes; i++) {
        int value;
        cin >> value;

        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
        }
    }

    cout << "\nOriginal List: ";
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

   
    Node* current = head;

    while (current != nullptr && current->next != nullptr) {
        int tempData = current->data;
        current->data = current->next->data;
        current->next->data = tempData;

        current = current->next->next;
    }

    cout << "\nAfter Swapping Data: ";
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}