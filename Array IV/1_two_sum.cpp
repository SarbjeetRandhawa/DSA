#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    int j = nums.size() - 1;
    int i = 0;
    int n1, n2;
    vector<int> ans, store;
    store = nums;
    sort(store.begin(), store.end());

    while (i < j)
    {
        if (store[i] + store[j] == target)
        {
            n1 = store[i];
            n2 = store[j];
            break;
        }
        else if (store[i] + store[j] < target)
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    for (int k = 0; k < nums.size(); k++)
    {
        if (nums[k] == n1)
        {
            ans.emplace_back(k);
        }
        else if (nums[k] == n2)
        {
            ans.emplace_back(k);
        }
    }
    return ans;
};

int main()
{
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum(arr, target);
    cout << "This is the answer for variant 1: " << ans[0] << " " << ans[1]<< endl;
    return 0;
}