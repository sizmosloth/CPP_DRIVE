#include<iostream>
using namespace std;
#define SIZE 100
int stack[SIZE];
int top = -1;

void push(int value){
    if(top == SIZE -1){
        cout << "STACK OVERFLOW" << endl;
        return;
    }
    stack[++top] = value;
}
void pop(){
    if(top == -1){
        cout << "STACK UNDERFLOW" << endl;
    }
    top--;
}
void peek(){
    if(top == -1){
        cout << "STACK EMPTY" << endl;
        return;
    }
    cout << "TOP ELEMENT : " << stack[top] << endl;
}
int main (){
    push(10);
    push(20);
    push(30);
    peek();
    pop();
    peek();
    return 0;
}