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
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    int n = num + 1;
    int total = (n * (n + 1)) / 2;
    cout << "The missing number is: " << total - sum << endl;
    return 0;
}
