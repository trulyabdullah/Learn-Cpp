#include <bits/stdc++.h>
using namespace std;

int sumOfN(int n)
{
    if (n == 0)
    {
        return n;
    }
    return n + sumOfN(n - 1);
}

void sumOfN(int n, int sum)
{
    if (n == 0)
    {
        cout << sum << endl; // when n is 0, just print sum.
        return;
    }
    sumOfN(n - 1, sum + n);
}

void q1()
{
    int input;
    cin >> input;
    cout << sumOfN(input) << "\n";
    sumOfN(input, 0); // alternate solution
}

int factOfN(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factOfN(n - 1);
}

void q2()
{
    int input;
    cin >> input;
    cout << factOfN(input) << "\n";
}

int main()
{
    // q1();
    q2();
    return 0;
}
