#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << ": ";
        cin >> vec[i];
    }
    sort(vec.begin(), vec.end());
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}