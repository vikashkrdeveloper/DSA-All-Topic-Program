#include <bits/stdc++.h>
using namespace std;
void merge(int *arr, int start, int mid, int end)
{
    int arrayPartationOneLength = mid - start + 1;
    int arrayPartationTwoLength = end - mid;
    int tempArray1[arrayPartationOneLength];
    int tempArray2[arrayPartationTwoLength];
    for (int i = 0; i < arrayPartationOneLength; i++)
    {
        tempArray1[i] = arr[start + i];
    }
    for (int i = 0; i < arrayPartationTwoLength; i++)
    {
        tempArray2[i] = arr[mid + i + 1];
    }
    int mergeArrayIndex = start;
    int index1 = 0;
    int index2 = 0;
    while (arrayPartationOneLength > index1 && arrayPartationTwoLength > index1)
    {
        if (tempArray1[index1] <= tempArray2[index2])
        {
            arr[mergeArrayIndex] = tempArray1[index1++];
        }
        else
        {
            arr[mergeArrayIndex] = tempArray2[index2++];
        }
        mergeArrayIndex++;
    }
    while (arrayPartationOneLength > index1)
    {
        arr[mergeArrayIndex] = tempArray1[index1++];
        mergeArrayIndex++;
    }
    while (arrayPartationTwoLength > index1)
    {
        arr[mergeArrayIndex] = tempArray2[index2++];
        mergeArrayIndex++;
    }
}
void mergeSort(int *arr, int start, int end)
{
    int mid = (start + end) / 2;
    if (start >= end)
    {
        return;
    }
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
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
    mergeSort(arr, 0, num);
    cout << "\n\nSorted Array:- \n\n";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}