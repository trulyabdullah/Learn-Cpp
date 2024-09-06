#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int start = 0;
    int end = 1;
    long long sum;
    while (start < nums.size() - 1)
    {
        for (int end = start + 1; end < nums.size(); end++)
        {
            sum = nums.at(start) + nums.at(end);
            if (sum == target)
            {
                return {start, end};
            }
        }
        start++;
    }
    return {-1, -1};
}

int main()
{
    vector<int> v = {3, 2, 3};
    int target;
    cin >> target;
    vector<int> ans = twoSum(v, target);
    cout << ans.at(0) << endl
         << ans.at(1);
    return 0;
}
