#include<iostream>
using namespace std;

#define MAX 100
class Stack{
    int a[MAX];
    int top;
    public:
        Stack(){top = -1;}
        bool isfull(){
            return top == MAX - 1;
        }
        bool isempty(){
            return top == -1;
        }
        void push(int x){
            if(isfull()){
                cout << "Stack overflow" << endl;
                return;
            }
            a[++top] = x;
            cout << "Pushed " << x << " to stack" << endl;
        }
        void pop(){
            if(isempty()){
                cout << "Stack underflow" << endl;
                return;
            }
            cout << "Popped " << a[top--] << " from stack" << endl;
        }
        void peek(){
            if(isempty()){
                cout << "Stack is empty" << endl;
                return;
            }
            cout << "Top element is " << a[top] << endl;
        }
        void display(){
            if(isempty()){
                cout << "Stack is empty" << endl;
                return;
            }
            cout << "Stack elements are: ";
            for(int i = top; i >= 0; i--){
                cout << a[i] << " ";
            }
            cout << endl;
        }
};
int main (){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
    return 0;
}