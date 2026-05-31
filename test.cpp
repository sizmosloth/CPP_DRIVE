#include <iostream>
using namespace std;

int main (){
    int n = 5;
    int arr[n] = {1, 2, 3, 4, 5};

    int key = 3;
    
    int low = 0, high = n - 1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(arr[mid] == key){
            cout << "Found at " << mid + 1;
            return 0;
        }
        else if (arr[mid] > key)
        {
            high = mid - 1;
        }
        else{
            low = low + 1;
        }
        
    }
    cout << "Element not found";
    return 0;









/*    for(int x : arr){
        cout << x << " ";
    }
*/
    return 0;
}