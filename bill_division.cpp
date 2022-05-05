#include <iostream>
using namespace std;



void bonAppetit(int n, int k, int b, int bill[])
{
    int temp = bill[k];
    int charge = b;
    int actual = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(i == k && k != 0)
            continue;
        else
            actual += bill[i];
        
    }
    actual /= 2;
    if(charge == actual)
        cout << "Bon Appetit";
    else
        cout << charge - actual;
}
int main()
{
    int n, k, b;
    cin >> n >> k;
    int *bill = new int [n];
    for(int i = 0; i < n;i ++)
        cin >> bill[i];
    cin >> b;
    bonAppetit(n, k, b, bill);
    return 0;
}