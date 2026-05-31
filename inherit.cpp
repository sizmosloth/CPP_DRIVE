#include<iostream>
using namespace std;

class Person{
    private:
        string name;
    public:
        Person(){name = "noname";}
        Person(string n){name = n;}
        void getname(){cout << "Name is: " << name << endl;}
};

class Student : public Person{
    private:
        int rollno;
    public:
        Student():Person(){rollno = 0;}
        Student(string n, int rn):Person(n){
            rollno = rn;
        }
        void getrollno(){
            cout << "Roll number is: " << rollno << endl;
        }
};

class Result : public Person{
    private:
        float percent;
    public:
        Result():Person(){percent = 0.0;}
        Result(string n, float p):Person(n){
            percent = p;
        }
        void getpercent(){
            cout << "Percentage is: " << percent << "%" << endl;
        }
};

int main (){
    
    Student s1("Samay", 21);
    s1.getname();
    s1.getrollno();

    Result r1("Rahul", 85.5);
    r1.getname();
    r1.getpercent();

    return 0;
}