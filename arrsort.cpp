#include <iostream>
#include <vector>
using namespace std;
int main (){
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector <int> vec(n);
    for(int i = 0; i < n; i++){
        cout << "Enter value " << i + 1 << endl;
        cin >> vec[i];
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(vec[j] > vec[j + 1]){
                swap(vec[j], vec[j + 1]);
            }
        }
    }
    for(int val : vec){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}