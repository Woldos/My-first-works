#include <iostream>
using namespace std;

int main(){
    long long int n;
    int even = 0;
    cin >> n;
    do{
        if((n % 2 == 0)&&(n % 10 != 0))
            even++;
        n /= 10;
    }while (n != 0);
    cout << even;
    return 0;}
