#include <iostream>
using namespace std;

void insertion_Sort(int arr[], int n)
{
    int i, j, x;
    for(int i = 1; i < n; i++)
    {
         x = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > x)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = x;
    }
}
int main()
{
    int n, arr[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    insertion_Sort(arr, n);
    for(int  i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}