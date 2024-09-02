#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*" << " ";
        }
        cout << "\n";
    }
}

void pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < (2 * i + 1); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern8(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n)
{
    pattern7(n);
    pattern8(n);
}

void pattern10(int n)
{
    // for (int i = 0; i < 2 * n - 1; i++)
    // {
    //     if (i < n)
    //     {
    //         for (int j = 0; j < i + 1; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = 0; j < 2 * n - 1 - i; j++)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // OR

    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = i + 1;
        if (i >= n)
        {
            stars = 2 * n - 1 - i;
        }
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern11(int n)
{
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         if (((i + j) % 2) != 0)
    //         {
    //             cout << "0" << " ";
    //         }
    //         else
    //         {
    //             cout << "1" << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    // OR

    // start from 0 or 1 and then just flip value of start after each printing
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        if (i % 2 == 0)
        {
            start = 1;
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << start << " ";
            start = 1 - start; // flips 1 to 0 and and 0 to 1 every time.
        }
        cout << endl;
    }
}

void pattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        // first seqeuence of numbers
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1;
        }

        // gaps
        for (int j = 0; j < 2 * (n - 1 - i); j++)
        {
            cout << " ";
        }

        // second sequence of numbers
        for (int j = i + 1; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n)
{
    int start = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << start << " ";
            start++;
        }
        cout << endl;
    }
}

void pattern14(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << char('a' + j) << " ";
        }
        cout << endl;
    }
}

void pattern15(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char a = 'A'; a < 'A' + n - i; a++)
        {
            cout << a << " ";
        }
        cout << endl;
    }
}

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        for (int j = 0; j < n - 1 - i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < i)
            {
                ch++;
            }
            else
            {
                ch--;
            }
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + n - i - 1;
        for (int j = 0; j < i + 1; j++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void pattern19(int n1)
{
    // first half
    for (int i = 0; i < n1; i++)
    {
        // first half of *
        for (int j = 0; j < n1 - i; j++)
        {
            cout << '*';
        }

        // gaps
        for (int j = 0; j < 2 * i; j++)
        {
            cout << " ";
        }

        // second half of *
        for (int j = 0; j < n1 - i; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    // second half
    for (int i = n1; i < 2 * n1; i++)
    {
        // first half of *
        for (int j = n1; j >= (2 * n1) - i; j--)
        {
            cout << '*';
        }

        // gaps
        for (int j = 0; j < 2 * ((2 * n1) - 1 - i); j++)
        {
            cout << " ";
        }

        // second half of *
        for (int j = n1; j >= (2 * n1) - i; j--)
        {
            cout << '*';
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    // // first half
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << '*';
    //     }
    //     for (int j = 0; j < 2 * (n - 1 - i); j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << '*';
    //     }
    //     cout << endl;
    // }
    // for (int i = 0; i < 2 * n; i++)
    // {
    //     cout << '*';
    // }
    // cout << endl;
    // // second half
    // for (int i = 0; i < n - 1; i++)
    // {
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         cout << '*';
    //     }
    //     for (int j = 0; j < 2 * i + 2; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 0; j < n - 1 - i; j++)
    //     {
    //         cout << '*';
    //     }
    //     cout << endl;
    // }
    // OR
    int spaces = 2 * n - 2;
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int stars = i;
        if (i > n)
        {
            stars = 2 * n - i;
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << '*';
        }

        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= stars; j++)
        {
            cout << '*';
        }

        if (i < n)
        {
            spaces -= 2;
        }
        else
        {
            spaces += 2;
        }
        cout << endl;
    }
}

void pattern21(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
            {
                cout << '*';
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}

void pattern22(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = j;
            int left = i;
            int right = 2 * n - j - 2;
            int bottom = 2 * n - i - 2;
            int minFinal = min(min(top, left), min(right, bottom));
            cout << n - minFinal << " "; // subtract again to get original matrix.
        }
        cout << endl;
    }
}

int main()
{
    int testCases;
    cin >> testCases;
    for (int i = 0; i < testCases; i++)
    {
        int n;
        cin >> n;
        pattern18(n);
        cout << endl;
    }
    return 0;
}
