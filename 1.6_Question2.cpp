#include <bits/stdc++.h>
using namespace std;

int main()
{

    // it can be done in a much simpler way but i wanted to use nested loops.
    // else just simple use elif instead of nested.
    int age;
    cin >> age;
    if (age < 18)
    {
        cout << "not eligible.";
    }
    else if (age <= 57)
    {
        cout << "eligible";
        if (age >= 55 && age <= 57)
        {
            cout << " but retirement soon";
        }
    }
    else
    {
        cout << "not eligible";
    }
    return 0;
}
