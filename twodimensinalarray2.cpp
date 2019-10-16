#include <iostream>
using namespace std;

int main(){
    int n,min = 10000,mini,minj;
    cin >> n;
    int arr[500][500];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if ((i == n - j - 1) && (arr[i][j] < min)){
                mini = i + 1;
                minj = j + 1;
                min = arr[i][j];
            }
        }
    }
    cout << mini << " " << minj;
    return 0;
}
