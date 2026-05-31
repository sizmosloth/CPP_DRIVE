#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = 10, low = 0, high = n - 1;
    int key = 4;
    bool found = false;

    while (low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key){
            cout << "element found at " << mid;
            found = true;
            break;
        } 
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(!found){
        cout <<"not found";
    }
}