#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
#include <queue>
using namespace std;
class Solution
{
public:
    int findSpecialInteger(vector<int> &arr)
    {
        int n = arr.size(), target = arr.size() / 4;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;
            if (m[arr[i]] > target)
                return arr[i];
        }
        return 0;
    }
};
int main()
{
    Solution S;
    vector<vector<int>> nums{{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    vector<int> question{1, 2, 2, 6, 6, 6, 6, 7, 10};
    cout << S.findSpecialInteger(question) << endl;
    cout << 1;
    return 0;
}
