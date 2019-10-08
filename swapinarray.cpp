#include <iostream>
using namespace std;

int main(){
    int n,k1,k2;
    cin >> n;
    int arr[50];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k1 >> k2;
    for (int i = 0; i < n; i++){
        swap(arr[k1-1],arr[k2-1]);
        break;
    }
    for(int i = 0;i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;}
