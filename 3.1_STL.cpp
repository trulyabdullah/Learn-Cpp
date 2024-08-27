#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v)
{
    for (vector<int>::iterator it = v.begin(); it < v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main()
{
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.erase(ms.find(1), ms.find(2)++);
    int ct = ms.count(2);
    cout << ct;
    return 0;
}
