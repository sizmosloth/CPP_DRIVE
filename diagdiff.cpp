#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
int diagdiff(vector<vector<int>>& arr){
    int n = arr.size();
    int pdiag = 0, sdiag = 0;
    for (int i = 0; i < n; i++){
        pdiag += arr[i][i];
        sdiag += arr[i][n - 1 - i]; 
    }
    return abs(pdiag- sdiag);
}
int main (){
    int n;
    cin >> n;
    vector<vector<int>> arr(n, vector<int> (n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << diagdiff(arr);
    return 0;
}
    
