#include <bits/stdc++.h>
using namespace std;

int secondLargestElementFind(int *arr, int num)
{
    int first_largest = 0, second_largest = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[first_largest] < arr[i])
        {
            first_largest = i;
        }
    }
    arr[first_largest] = -1;
    for (int i = 0; i < num; i++)
    {
        if (arr[second_largest] < arr[i])
        {
            second_largest = i;
        }
    }
    return second_largest;
}
int secondSmallestElementFind(int *arr, int num)
{
    int first_smallest = 0, second_smallest = 0;
    for (int i = 0; i < num; i++)
    {
        if (arr[first_smallest] > arr[i])
        {
            first_smallest = i;
        }
    }
    arr[first_smallest] = -1;
    for (int i = 0; i < num; i++)
    {
        if (arr[second_smallest] > arr[i] && arr[i] != -1)
        {
            second_smallest = i;
        }
    }
    return second_smallest;
}

int main()
{
    int num;
    cout << "Enter the number of elements in the array: ";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr[i];
    }
    int second_largest = secondLargestElementFind(arr, num);
    int second_smallest = secondSmallestElementFind(arr, num);
    cout << "Second largest element is : " << arr[second_largest] << endl;
    cout << "Second smallest element is : " << arr[second_smallest];

    return 0;
}
