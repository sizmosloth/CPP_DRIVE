#include<iostream>
using namespace std;
//----------BUBBLE SORT

void bubsort(int arr[], int n){
    cout << "Bubble Sort: ";
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
//----------SELECTION SORT

void selsort(int arr[], int n){
    cout << "Selection Sort: ";
    for(int i = 0; i < n - 1; i++){
        int si = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[si]){si = j;}
        }
        swap(arr[si], arr[i]);
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
//----------INSERTION SORT

void inssort(int arr[], int n){
    cout << "Insertion Sort: ";
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[i] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}
//----------QUICK SORT

int main (){
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cout << "Enter element " << i + 1 << " : " << endl;
        cin >> arr[i];
    }
    inssort(arr, n);
    cout << "\n";
    return 0;
}