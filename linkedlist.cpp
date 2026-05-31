#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
void insatbeg(Node* & head, int value){
    Node* newnode = new Node();
    newnode -> data = value;
    newnode -> next = head;
    head = newnode;
}
void printnodes(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
}
int main (){
/*
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();
    first -> data = 10;
    first -> next = second;
    second -> data = 20;
    second -> next = third;
    third -> data = 30;
    third -> next = NULL;
    Node* head = first;
    Node* temp = head;
    while(temp != NULL){
        cout << temp ->data << " ";
        temp = temp ->next;
    }
*/
    Node* head = NULL;
    insatbeg(head, 30);
    insatbeg(head, 20);
    insatbeg(head, 10);
    printnodes(head);
    return 0;
}
