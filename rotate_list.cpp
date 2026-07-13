#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* previous;

    Node(int data){
        this->data = data;
        next = nullptr;
        previous = nullptr;
    }
};

int main(){

    int size;

    Node* head = nullptr;
    Node* tail = nullptr;

    cout << "Enter the size of linked list: ";
    cin >> size;

    cout << "Enter values for linked list: ";

    for(int i = 0; i < size; i++){

        int value;
        cin >> value;

        Node* newNode = new Node(value);

        if(head == nullptr){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            newNode->previous = tail;
            tail = newNode;
        }
    }

    cout << "\nOriginal Linked List:\n";

    Node* temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n\nEnter value of k for rotation: ";
    int k;
    cin >> k;

    
    int length = 0;
    temp = head;

    while(temp != nullptr){
        length++;
        temp = temp->next;
    }

    
    k = k % length;

    if(k != 0){

        Node* newTail = head;

    
        for(int i = 1; i < length - k; i++){
            newTail = newTail->next;
        }

        Node* newHead = newTail->next;

      
        tail->next = head;
        head->previous = tail;

        newTail->next = nullptr;
        newHead->previous = nullptr;

        head = newHead;
        tail = newTail;
    }

    cout << "\nRotated Linked List:\n";

    temp = head;

    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    return 0;
}