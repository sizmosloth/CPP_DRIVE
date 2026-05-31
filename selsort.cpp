#include<iostream>
int main (){
    int n = 5;
    int arr[n] = {5, 2, 3, 4, 1};
    for(int i = 0; i < n - 1; i++){
        int si = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[si]){si = j;}
        }
        std::swap(arr[i], arr[si]);
    }
    for(int x : arr){
        std::cout << x << " ";
    }
    return 0;
}