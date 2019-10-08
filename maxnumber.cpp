#include <iostream>
using namespace std;

int main(){
    int n,q = 0,c;
    cin >> n;
    do{
        c = n % 10;
        if (q < c){
                q = c;
        }
        n /= 10;
    } while (n != 0);
    cout << q;
    return 0;
}
