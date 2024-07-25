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
    int k;
    cout << "Enter the kth number : ";
    cin >> k;
    k = k % num;
    for (int i = 0; i < num; i++)
    {
        if (i < k)
        {
            cout << arr[num + i - k]<<" ";
        }
        else
        {
            cout << arr[i - k]<<" ";
        }
    } 
    return 0;
}
