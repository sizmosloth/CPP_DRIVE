#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector <int> vec(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> vec[i];
    }
    int start = 0, end = n - 1;
    while(start < end){
        swap(vec[start], vec[end]);
        start++, end--;
    }
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
}