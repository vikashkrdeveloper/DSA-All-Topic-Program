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

    for (int i = 0; i < num; i++)
    {
        if (key == arr[i])
        {
            cout << "Element found at index " << i << endl;
            return 0;
        }
    }
    cout << "Element not found" << endl;

    return 0;
}