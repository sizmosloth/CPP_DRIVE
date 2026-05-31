#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insatbeg(Node* &head, int data){
    Node* newnode = new Node();
    newnode -> data = data;
    newnode -> next = head;
    head = newnode;
}
void insatend(Node* &head, int data){
    Node* newnode = new Node();
    newnode -> data = data;
    newnode -> next = NULL;
    if(head == NULL){
        head = newnode;
        return;
    }
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newnode;
}
void insatpos(Node* &head, int data, int pos){
    Node* newnode = new Node();
    newnode -> data = data;
    if(pos == 1){
        newnode -> next = head;
        head = newnode;
        return;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1; i++){
        temp = temp -> next; 
    }
    newnode -> next = temp -> next;
    temp -> next = newnode;
}
void displayll(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << "\n";
}
void delatbeg(Node* &head){
    if(head == NULL){
        return;
    }
    Node* temp = head;
    head = head -> next;
    delete temp;
}
void delatend(Node* &head){
    if(head == NULL){
        return;
    }
    if(head -> next == NULL){
        delete head;
        head = NULL;
    }
    Node* temp = head;
    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }
    delete temp -> next;
    temp -> next = NULL;
}
void delatpos(Node* &head, int pos){
    if(head == NULL){
        return;
    }
    if(pos == 1){
        Node* temp = head;
        head = head -> next;
        delete temp;
    }
    Node* temp = head;
    for(int i = 1; i < pos - 1; i++){
        temp = temp -> next;
    }
    Node* del = temp -> next;
    temp -> next = del -> next;
    delete del;
}
int main() {
    Node* head = NULL;
    insatbeg(head, 30);
    insatbeg(head, 20);
    insatbeg(head, 10);
    displayll(head);
    insatend(head, 40);
    displayll(head);
    insatpos(head, 25, 3);
    displayll(head);
    delatbeg(head);
    displayll(head);
    delatend(head);
    displayll(head);
    delatpos(head, 2);
    displayll(head);

    return 0;
}