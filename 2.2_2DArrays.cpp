#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][4];
    arr[1][2] = 60;
    cout << arr[1][2] << endl;

    // garbage value assigned automatically.
    cout << arr[2][3] << endl;
    return 0;
}
