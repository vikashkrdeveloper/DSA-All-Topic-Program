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
    int num2;
    cout << "Enter the number of elements in the second array: ";
    cin >> num2;
    int arr2[num2];
    for (int i = 0; i < num2; i++)
    {
        cout << "Enter the element " << i + 1 << ": ";
        cin >> arr2[i];
    }
    for (int i = 0, j = 0; i < num && j < num2;)
    {
        if (arr[i] == arr2[j])
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
        else if (arr[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return 0;
}