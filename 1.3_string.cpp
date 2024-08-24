#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string and getline

    // you have to take two string in following way
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1 << s2;

    // to get them together
    // but getline stops input after enter key is pressed
    string str;
    getline(cin, str);
    cout << str << endl;

    // character input
    char ch;
    cin >> ch;
    // can also use:
    // char ch = 'g';
    cout << ch << "\n";

    // we can also use string
    // but string tend to take more space
    // hence char for single characters
    string ch2 = "g";
    cout << ch2;

    // we can store 10 in long long but it will take lot more space
    // every datatype takes a certain space hence use appropriately.
    return 0;
}