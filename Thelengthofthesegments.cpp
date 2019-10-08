#include <iostream>
using namespace std;

int main(){
    int a,b,c,ab = 0, bc = 0,sum = 0;
    cin >> a >> b >> c;
    if (a > b){
        ab = a - b;
    } else {
        ab = b - a;
    }
    if (b > c){
        bc = b - c;
    } else {
        bc = c - b;
    }
    sum = ab + bc;
    cout << ab << " " << bc << " " << sum;
    return 0;
}
