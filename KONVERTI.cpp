#include <iostream>
using namespace std;

int main(){
    double w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    if ((w2 > w1) && (h2 > h1)){
        cout << "YES";
    } else {
        if((w2 > h1)&&(h2 > w1)){
            cout << "YES";
    } else {
            cout << "NO";
        }
    }
    return 0;
}
