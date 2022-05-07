#include <iostream>
using namespace std;

void insertion_Sort(int arr[], int n)
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
    }
}
int pickingNumbers(int arr[], int n)
{
    insertion_Sort(arr, n);
    int temp[100];
    int k = 0;
    int dem = 1;
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            int sum = arr[i] - arr[j];
            if(sum == 1 || sum == -1 || sum == 0)
                dem++;
            else
            {
                i = j;
                temp[k] = dem;
                k++;
                dem = 1;
            }
        }
        if(k == 0)
            break;
    }
    int max = temp[0];
    if(k == 0)
    {
        temp[0] = dem;
        k++;
    }
    for(int i = 0; i < k; i++)
    {
        if(max < temp[i])
            max = temp[i];
    }
    return max;
}
int main()
{
    int n, arr[1000];
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout << pickingNumbers(arr, n);       
    return 0;
}