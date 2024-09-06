#include <bits/stdc++.h>
using namespace std;

int reverseNum(int n)
{
    int num = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        num = (num * 10) + lastDigit;
        n = n / 10;
    }
    return num;
}

string palindrome(int n)
{
    bool check = (n == reverseNum(n));
    if (check)
    {
        return "yes";
    }
    else
    {
        return "no";
    }
}

vector<int> divisor(int n)
{
    // standard
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    // other approach
    vector<int> ans;

    // instead of sqrt, you can use i <= n*n
    // now program doesn't call sqrt and it reduces time
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            ans.push_back(i);
            if ((n / i) != i) // for perfect squares
            {
                ans.push_back(n / i);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n = 38200;
    vector<int> v = divisor(n);
    for (auto ite = v.begin(); ite != v.end(); ite++)
    {
        cout << *(ite) << " ";
    }
    return 0;
}
