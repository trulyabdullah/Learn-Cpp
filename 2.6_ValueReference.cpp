#include <bits/stdc++.h>
using namespace std;

void doSomething(int a)
{
    cout << a << endl;
    a += 5;
    cout << a << endl;
    a *= 10;
    cout << a << endl;
}

void doSomething(string a)
{
    a[0] = 'c';
    cout << a << endl;
}

void doSomethingRef(string &a)
{
    a[0] = 'c';
    cout << a << endl;
}

void doSomething(int arr[])
{
    arr[2] = 9999;
}

int main()
{
    int num = 10;
    doSomething(num);
    cout << num << endl; // value remains unchanged (pass by value).
    // in pass by value, original number doesn't go, instead a COPY goes.
    // original no. will be somewhere in the memory. that memory didn't go.

    string str = "try";
    doSomething(str);
    cout << str << endl;

    // in pass by reference, the address is taken i.e. original is taken
    // it can be done by other ways also but those are confusing
    // just attach '&' to pass by reference
    doSomethingRef(str);
    cout << str << endl;

    // arrays are always passed by reference.
    int arr[5];
    for (int i = 0; i <= 4; i++) // taking input
    {
        cin >> arr[i];
    }
    for (int i = 0; i <= 4; i++) // printing output
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    doSomething(arr);            // passed by reference
    for (int i = 0; i <= 4; i++) // original array is changed
    {
        cout << arr[i] << " ";
    }

    return 0;
}