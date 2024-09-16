#include <bits/stdc++.h>
using namespace std;

void printName(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "Hey!!" << endl;
    printName(n - 1);
}

void printName2(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "Hey!!" << endl;
    printName2(i + 1, n);
}

void q1()
{
    int input;
    cin >> input;
    printName(input);
    printName2(1, input); // alternate solution
}

void printNumbers(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << i << endl;
    printNumbers(i + 1, n);
}

void q2()
{
    int input;
    cin >> input;
    printNumbers(1, input);
}

void printNumbersRev(int n)
{
    if (n == 0)
        return;
    cout << n << endl;
    printNumbersRev(n - 1);
}

void printNumbersRev2(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    cout << i << endl;
    printNumbersRev2(i - 1, n);
}

void q3()
{
    int input;
    cin >> input;
    printNumbersRev(input);
    printNumbersRev2(input, input); // alternate solution
}

void printNumbersBacktrack(int i, int n)
{
    if (i < 1)
    {
        return;
    }
    printNumbersBacktrack(i - 1, n);
    cout << i << endl;
}

void q4()
{
    int input;
    cin >> input;
    printNumbersBacktrack(input, input);
}

void printNumbersRevBacktrack(int i, int n)
{
    if (i > n)
    {
        return;
    }
    printNumbersRevBacktrack(i + 1, n);
    cout << i << endl;
}

void q5()
{
    int input;
    cin >> input;
    printNumbersRevBacktrack(1, input);
}

int main()
{
    // q1();
    // q2();
    // q3();
    // q4();
    q5();
    return 0;
}