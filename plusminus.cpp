#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
void plusminus(vector<int> &arr){
    int n = arr.size();
    int pos = 0, neg = 0, ze = 0;
    for(int x : arr){
        if (x > 0){
            pos++;
        }
        else if ( x < 0){
            neg++;
        }
        else ze++;

    }
    cout << fixed << setprecision(6);
    cout << (double)pos/n << endl;
    cout << (double)neg/n << endl;
    cout << (double)ze/n <<  endl;
}
int main (){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    plusminus(vec);
}