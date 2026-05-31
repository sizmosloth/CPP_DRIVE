#include <iostream>
using namespace std;
int main (){
    int a[3], b[3];
    for (int i = 0; i < 3; i++){
        cin >> a[i];
    } 
    for (int i = 0; i < 3; i++){
        cin >> b[i];
    }
    int comp[] = {0,0};
    for(int i = 0; i < 3; i++){
        if (a[i] > b[i]){
            comp[0]++;
        }
        else if (a[i] < b[i]){
            comp[1]++;
        }
        else continue;
    }
    for(int val : comp){
        cout << val << " ";
    }
    cout << endl;
}