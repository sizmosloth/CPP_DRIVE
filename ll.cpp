#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head = NULL;

void insatbeg(int value){
    Node* newnode = new Node();
    newnode -> data = value;
    newnode -> next = head;
    head = newnode;
}
void insatend(Node* & head, int value){
    Node* newnode = new Node();
    newnode -> data = value;
    newnode -> next = NULL;
    if(head == NULL{
        head = newnode;
        return;
    })
    Node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = newnode;
}
void deleteatbeg(Node* &head){
    if(head == NULL){
        cout << "list is empty" << endl;
        return;
    }
    Node* temp = head;
    head = head -> next;
    delete temp;
}
void deleteatend(Node* & head){
    if(head == NULL){
        cout << "list is empty" << endl;
        return;
    }
    if (head -> next == NULL){
        delete head;
        head = NULL;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;
}
void lldisplay(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int main (){
    insatbeg(30);
    insatbeg(20);
    insatbeg(10);
    lldisplay();
    return 0;
}