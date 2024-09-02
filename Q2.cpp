#include <bits/stdc++.h>
using namespace std;

// Q. Link https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/description/?envType=daily-question&envId=2024-09-02

int chalkReplacer(vector<int> &chalk, int k)
{
    int replaceStudent = 0;
    for (int i = 0; k > 0; i++)
    {
        if (i >= chalk.)
        {
            i = 0;
        }

        k = k - chalk.at(i);
        if (k < 0)
        {
            replaceStudent = i;
            break;
        }
    }
    return replaceStudent;
    chalk.max_size();
}

int main()
{
    return 0;
}