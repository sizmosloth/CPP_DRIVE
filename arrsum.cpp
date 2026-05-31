#include <iostream>
#include <vector>
using namespace std;
int sum(vector<int> arr, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i];
    }
    cout << sum(vec, n);
    return 0;
}