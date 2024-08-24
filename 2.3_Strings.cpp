#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name = "Name";

    // char stored at an index
    cout << name[2] << endl;

    int len = name.size();
    cout << name[len - 1] << endl;

    // we can also manipulate specific characteres
    name[len - 1] = 'z';
    cout << name[len - 1];
    return 0;
}
