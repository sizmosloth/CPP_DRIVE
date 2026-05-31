#include<iostream>
#include<vector>
using namespace std;
void candles(vector<int> & arr){
    int n = arr.size();
    int count = 0, highest = arr[0];
    for(int i = 1; i < n; i++){
        if(highest < arr[i]) highest = arr[i];
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == highest) count++;
    }
    cout << count << endl;
}
int main (){
    int n;
    cin >> n;
    vector<int>vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    candles(vec);
}