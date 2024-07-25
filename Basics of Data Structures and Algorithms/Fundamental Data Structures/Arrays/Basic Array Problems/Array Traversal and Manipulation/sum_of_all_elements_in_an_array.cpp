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
    long long sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    cout << "The sum of all elements in the array is: " << sum;
    return 0;
}
