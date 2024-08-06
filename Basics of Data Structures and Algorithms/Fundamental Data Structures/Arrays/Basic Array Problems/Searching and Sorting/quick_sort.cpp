#include <bits/stdc++.h>
using namespace std;
int pivotElement(int *arr, int start, int end)
{
    int tempPivotElement = arr[end];
    int pivot = start - 1;
    for (int i = start; i < end; i++)
    {
        if (arr[i] < tempPivotElement)
        {
            pivot++;
            swap(arr[i], arr[pivot]);
        }
    }
    swap(arr[pivot + 1], arr[end]);
    return (pivot + 1);
}
void quickSort(int *arr, int start, int end)
{
    if (start > end)
        return;
    int pi = pivotElement(arr, start, end);
    quickSort(arr, start, pi - 1);
    quickSort(arr, pi + 1, end);
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
    quickSort(arr, 0, num);
    cout << "\n\nSorted Array:- \n\n";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}