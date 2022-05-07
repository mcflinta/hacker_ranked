// #include <iostream>
// using namespace std;

// void insertionSort(int arr[], int n)
// {
//     int i, key, j;
//     for(i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
//         while(j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;

//         }
//         arr[j + 1] = key;
//     }
// }

// int main()
// {
//     int arr[100], n;
//     cin >> n;
//     for(int i = 0; i < n; i++)
//         cin >> arr[i];
//     insertionSort(arr, n);
//     for(int i = 0; i < n; i++)
//         cout << arr[i] << " ";
//     return 0;
// }

#include <iostream>
using namespace std;

void insertion_Sort(int arr[], int n)
{
    int i, key, j;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
            for(int k = 0; k < n; k++)
                cout << arr[k] << " ";
            cout << endl;

        }
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[100], n;
    cin >> n;
    for(int  i = 0; i < n; i++)
        cin >> arr[i];
    insertion_Sort(arr, n);
    for(int  i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}