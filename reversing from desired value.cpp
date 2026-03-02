#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

Node* head = NULL;


void insertEnd(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;
}


void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


void reverseBeforeKey(int key) {

    if (head == NULL || head->data == key)
        return;  

    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

   
    while (current != NULL && current->data != key) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    

    head->next = current;  
    head = prev;           
}

int main() {

    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    insertEnd(5);
    insertEnd(6);

    cout << "Original List: ";
    display();

    reverseBeforeKey(4);

    cout << "After Reversing Before Key 4: ";
    display();

    return 0;
}
