#include<iostream>
#include<vector>
using namespace std;
void grade(vector<int> &arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] < 38) continue;
        else {
            int t = arr[i];
            while(t % 5 != 0){t++;}
            if(t - arr[i] < 3){
                arr[i] = t;
            }
        }
    }
}
int main (){
    int n;
    cin >> n;
    vector<int> score(n);
    for(int i = 0; i < n; i++){
        cin >> score[i]; 
    }
    grade(score);
    for(int i : score){
        cout << i << " ";
    }
}