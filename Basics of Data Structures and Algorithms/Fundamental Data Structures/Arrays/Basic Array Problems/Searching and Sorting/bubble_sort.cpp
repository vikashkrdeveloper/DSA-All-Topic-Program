#include <bits/stdc++.h>
using namespace std;
void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
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
    bubbleSort(arr, num);
    cout << "\n\nSorted Array:- \n\n";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}