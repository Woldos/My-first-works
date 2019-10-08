#include <iostream>
using namespace std;

int main(){
    int n,k,s;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> k >> s;
    for (int i = 0; i < n; i++){
        if (arr[k-1] >= arr[s-1]){
            cout << "YES";
        } else {
            cout << "NO";
        }
    break;
    }
    return 0;}
