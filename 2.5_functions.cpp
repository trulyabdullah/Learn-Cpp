#include <bits/stdc++.h>
using namespace std;

void printName()
{
    cout << "Hey Abdullah!" << endl;
}

void printName(string s)
{
    cout << "Hey " << s << "!" << endl;
}

int sum(int a, int b)
{
    return a + b; // 1 + 2=3
}

int maxx(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    return b;
    // if we don't return b here, then function will look for return if the ifelse is not satisfied
    // it doesn't find it hence a garbage value will be returned.
}

int main()
{
    printName();
    string name;
    getline(cin, name);
    printName(name);

    cout << "sum is " << sum(1, 2) << endl;

    // we can use inbuilt functions
    // or make our own
    int a = 3, b = 7;
    cout << max(a, b) << endl;
    cout << maxx(a, b) << endl;
    return 0;
}