#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int cnt=1;
        int max=1;
        if(n==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        for(int i=0 ; i<n-1;i++){
            if(nums[i]==nums[i+1]) continue;
            if((nums[i]+1)==nums[i+1]){
                cnt++;
                if(cnt>max){
                  max=cnt;
                }

            }else{
                cnt=1;
            }

        }
        return max;
    }


int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestConsecutive(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}