#include <iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    int arr[200];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int temp = 0;
    cin >> k;
    for(int i = 0; i < n; i++){
        if (k-1 > i){
            swap(arr[temp],arr[temp + 1]);
            temp++;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;}
