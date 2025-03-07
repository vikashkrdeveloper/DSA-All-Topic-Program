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
    map<int, int> frequencyCount = {};
    for (int i = 0; i < num; i++)
    {
        frequencyCount[arr[i]]++;
    }
    for (auto i : frequencyCount)
    {
        cout << "Frequency of " << i.first << " is " << i.second << endl;
    }

    return 0;
}