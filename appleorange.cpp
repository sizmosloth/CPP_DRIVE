#include<iostream>
#include<vector>
using namespace std;
void appleorange(int s1, int t1, int a1, int b1, vector<int> &arr, vector<int> &crr){
    int apples = 0, oranges = 0;
    int a_size = arr.size(), o_size = crr.size();

    for(int i = 0; i < a_size; i++){
        int distance = arr[i] + a1;
        if(distance >= s1 && distance <= t1){apples++;}
    }
    for(int i = 0; i < o_size; i++){
        int distance = crr[i] + b1;
        if(distance >= s1 && distance <= t1){oranges++;}
    }
    cout << apples << endl << oranges;
}
int main (){
    int s, t;
    int a, b;
    int m, n;
    cout << "Enter range of feild: ";
    cin >> s >> t;
    cout << "Enter Tree's location, apple first then orange: ";
    cin >> a >> b;
    cout << "Enter number of Apples & Oranges: ";
    cin >> m >> n;
    vector<int>dapples(m);
    vector<int>doranges(n);
    cout << "Enter distance of apples: ";
    for(int i = 0; i < m; i++){
        cin >> dapples[i];
    } 
    cout << "Enter distance of oranges: ";
    for(int i = 0; i < n; i++){
        cin >> doranges[i];
    } 
    appleorange(s, t, a, b, dapples, doranges);
    return 0;
}