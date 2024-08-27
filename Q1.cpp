#include <bits/stdc++.h>
using namespace std;

// Q. link https://leetcode.com/problems/type-of-triangle/description/

string typeOfTriangle(vector<int> &nums)
{
    // check for equilateral triangle
    if (nums.at(0) == nums.at(1) && nums.at(1) == nums.at(2))
    {
        return "equilateral";
    }

    // check if triangle is possible
    int sum;
    sum = nums.at(0) + nums.at(1);
    if (sum <= nums.at(2))
    {
        return "none";
    }

    sum = nums.at(0) + nums.at(2);
    if (sum <= nums.at(1))
    {
        return "none";
    }

    sum = nums.at(1) + nums.at(2);
    if (sum <= nums.at(0))
    {
        return "none";
    }

    // check for scalene or isosceles
    if (nums.at(0) != nums.at(1) && nums.at(1) != nums.at(2) && nums.at(0) != nums.at(2))
    {
        return "scalene";
    }

    return "isosceles";
}
int main()

{
    vector<int> tri(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> tri[i];
    }
    string ans = typeOfTriangle(tri);
    cout << ans;
    return 0;
}
