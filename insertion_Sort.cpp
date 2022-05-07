#include <iostream>
using namespace  std;

void insetion_Sort(int arr[], int n)
{
    int i, j, key;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
        for(int k = 0; k <  n; k++)
            cout << arr[k] << " ";
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[1000];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    insetion_Sort(arr, n);
    return 0;
}