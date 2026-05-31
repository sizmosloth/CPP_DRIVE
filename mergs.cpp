#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right){
    int temp[100];
    int i = left;
    int j = mid + 1;
    int k = 0;

    while(i <= mid && j <= right){
        if(arr[i] < arr[j]){
            temp[k++] = arr[i++];
        }
        else{
            temp[k++] = arr[j++];
        }
    }
    while(i <= mid){
        temp[k++] = arr[i++];
    }
    while(j <= right){
        temp[k++] = arr[j++];
    }
    for(int i = left; i <= right; i++){
        arr[i] = temp[i - left];
    }
}
void mergesort(int arr[], int left, int right){
    if(left < right){
        int mid = (left + right)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}
int main (){
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    mergesort(arr, 0, n - 1);

    for(int x : arr){
        cout << x << " ";
    }
    return 0;
}