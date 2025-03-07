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
    cout << "The elements of the array are: ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
