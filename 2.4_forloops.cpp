#include <bits/stdc++.h>
using namespace std;

int main()
{
    // can write for loop, if else, etc. inside for and while loop.
    string name = "Abdullah";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ". " << name << "\n";
    }

    int i = 100;
    while (i > 90)
    {
        cout << i << ". " << name << "\n";
        i--;
    }

    // do while uses code inside atleasst once.
    int a = 1;
    do
    {
        cout << "name" << "\n";
        a++;
    } while (a < 0);

    return 0;
}
