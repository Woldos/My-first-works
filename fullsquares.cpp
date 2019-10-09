#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int a, b, end;
    cin >> a >> b;
    for (int i = sqrt(a), end = sqrt(b); i <= end; i++)
        if (i*i >= a)
            cout << i*i << " ";
}
