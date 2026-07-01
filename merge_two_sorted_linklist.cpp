#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Insert at end
void insert(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

// Display linked list
void display(Node* head) {
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

// Bubble Sort
void sortList(Node* head) {

    if (head == nullptr)
        return;

    for (Node* i = head; i != nullptr; i = i->next) {

        for (Node* j = i->next; j != nullptr; j = j->next) {

            if (i->data > j->data) {

                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

// Merge two sorted linked lists
Node* mergeLists(Node* head1, Node* head2) {

    Node dummy(0);
    Node* tail = &dummy;

    while (head1 != nullptr && head2 != nullptr) {

        if (head1->data <= head2->data) {
            tail->next = head1;
            head1 = head1->next;
        }
        else {
            tail->next = head2;
            head2 = head2->next;
        }

        tail = tail->next;
    }

    if (head1 != nullptr)
        tail->next = head1;

    if (head2 != nullptr)
        tail->next = head2;

    return dummy.next;
}

int main() {

    Node* head1 = nullptr;
    Node* tail1 = nullptr;

    Node* head2 = nullptr;
    Node* tail2 = nullptr;

    int n1, n2, value;

    cout << "Enter number of nodes in first linked list: ";
    cin >> n1;

    cout << "Enter elements:\n";

    for (int i = 0; i < n1; i++) {
        cin >> value;
        insert(head1, tail1, value);
    }

    cout << "\nFirst Linked List:\n";
    display(head1);

    cout << "\nEnter number of nodes in second linked list: ";
    cin >> n2;

    cout << "Enter elements:\n";

    for (int i = 0; i < n2; i++) {
        cin >> value;
        insert(head2, tail2, value);
    }

    cout << "\nSecond Linked List:\n";
    display(head2);

    // Sort both linked lists
    sortList(head1);
    sortList(head2);

    cout << "\nFirst Sorted Linked List:\n";
    display(head1);

    cout << "\nSecond Sorted Linked List:\n";
    display(head2);

    // Merge
    Node* mergedHead = mergeLists(head1, head2);

    cout << "\nMerged Sorted Linked List:\n";
    display(mergedHead);

    return 0;
}