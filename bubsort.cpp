#include<iostream>
int main (){
    int n = 5;
    int arr[] = {1, 5, 4, 2, 3};
    std::cout << "Bubble Sort\n";
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
    for(int x : arr){
        std::cout << x << " ";
    }
    return 0;
}