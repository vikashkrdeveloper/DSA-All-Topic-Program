#include <bits/stdc++.h>
using namespace std;

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
    int key;
    cout << "Enter the element to be searched: ";
    cin >> key;
    int start = 0, end = num - 1;
    int middle = (start + end) / 2;
    while (start <= end)
    {
        if (arr[middle] == key)
        {
            cout << "Element found at index " << middle << endl;
            return 0;
        }
        else if (arr[middle] < key)
        {
            start = middle + 1;
        }
        else
        {
            end = middle - 1;
        }
        middle = (start + end) / 2;
    }
    cout << "Element not found" << endl;
    return 0;
}