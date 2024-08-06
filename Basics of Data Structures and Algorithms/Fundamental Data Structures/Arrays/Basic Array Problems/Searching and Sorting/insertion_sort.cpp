#include <bits/stdc++.h>
using namespace std;
void insertionSort(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int num;
    cout << "Enter the number of elements: ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the number index is " << i << " value is : ";
        cin >> arr[i];
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << ", ";
    }
    insertionSort(arr, num);
    cout << "\n\nSorted Array:- \n\n";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}