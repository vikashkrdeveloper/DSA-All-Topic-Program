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

    for (int i = 0; i < num / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[num - (i + 1)];
        arr[num - (i + 1)] = temp;
    }
    cout << "The reverse of the array is: ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
