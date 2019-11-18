#include <iostream>

using namespace std;

int main(){

    string str1,str2;
    int mark = 5;
    getline(cin, str1);
    getline(cin, str2);
    for (int i = 0; i < str1.length(); i++){
        if(str1[i] != str2[i]){
            mark--;
        }
    }
    if(mark < 2){
        mark = 2;
    }
    cout << mark;

    return 0;}
