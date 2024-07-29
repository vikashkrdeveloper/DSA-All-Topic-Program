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
    int slow = arr[0];
    int fast = arr[0];

    while (true)
    {
        slow = arr[slow];
        fast = arr[arr[fast]];
        if (slow == fast)
        {
            break;
        }
    }
    fast = arr[0];
    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }

    cout << "The duplicate number is: " << slow << endl;
    return 0;
}