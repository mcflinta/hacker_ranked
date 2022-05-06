#include <iostream>
using namespace std;

void insert_sort(int n, int a[])
{
    int i, x, j;
    for(i = 1; i < n; i++)
    {
        x = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > x)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = x;
    }
}

int in_pair(int n, int a[])
{
    int sum = 0;
    for(int i = 0; i < n; i+= 2)
    {
        if(a[i] == a[i + 1])
            sum++;     
    }
    return sum;
}
int main()
{
    int n, a[100];
    cin >> n;
    for(int i = 0; i <n; i++)
        cin >> a[i];
    insert_sort(n, a);
    cout << in_pair(n, a);
    cout << endl;
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}