#include <iostream>
using namespace std;
class vehicle{
    protected:
        string type;
    public:
        void settype(string s){
            type = s;
        }
        void gettype(){
            cout << "Type : " << type << endl;
        }
};
class car : public vehicle{
    public:
        int wheels;
        void setwheels(int w){
            wheels = w;
        }
        void getwheels(){
            cout << "Wheels : " << wheels << endl;
        }
};
int main (){
    car nano;
    nano.settype("fuel");
    nano.setwheels(4);
    nano.gettype();
    nano.getwheels();
    return 0;
}