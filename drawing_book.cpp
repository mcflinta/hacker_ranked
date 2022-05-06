#include <iostream>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int dem = 0;
    int temp = n / 2;
    if(p == n || p == 1)
        cout << 0;
    else if(n % 2 == 1 && (p == n  || p == n - 1))
        cout << 0;
    else if(n % 2 == 0 && p == n - 1)
        cout << 1;
    else if(p <= temp + 1 && temp % 2 == 0)
        cout << p / 2;
    else if(p <= temp)
        cout << p / 2;
    else if(p >= temp + 1 && temp % 2 == 0)
        cout << (n - p) / 2;
    else
        cout << (n - p) / 2;
    return 0;
}