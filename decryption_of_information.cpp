#include <iostream>

using namespace std;

int main(){

    string str;
    int n,con = 0;
    getline(cin, str);
    cin >> n;
    con = n;
    for(int i = 0; i < str.length(); i++){
        if(i == n - 1){
            cout << str[i];
            n += con;
        }
    }
    return 0;}
