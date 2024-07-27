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
    bool isSorted = true;
    for (int i = 0; i < num; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            isSorted = true;
        }
        else
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
    {
        cout << "The array is sorted";
    }
    else
    {
        cout << "The array is not sorted";
    }

    return 0;
}
