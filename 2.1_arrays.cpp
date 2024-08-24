#include <bits/stdc++.h>
using namespace std;

int main()
{
    // entire array is stored at a particular memory
    // that address is very randomized
    // but 1 index will be right after 0. so on for 2, 3...
    // stored in CONSECUTIVE LOCATIONS
    int arr[6];
    for (int i = 0; i <= 5; i++)
    {
        cin >> arr[i];
    }
    cout << arr[5];

    // you can also modify
    arr[5] += 10;
    cout << "\n";
    cout << arr[5];
    return 0;
}
