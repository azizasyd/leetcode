#include <bits/stdc++.h>

class Solution {
public:
    int findMiddleIndex(std::vector<int>& nums) {
        int total_sum = std::accumulate(nums.begin(), nums.end(), 0);

        int left_sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            int right_sum = total_sum - left_sum - nums[i];
            if(left_sum == right_sum){
                return i;
            }
            left_sum += nums[i];
        }
        return -1;
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {2,3,-1,8,4};
    int res = s.findMiddleIndex(nums);
    std::cout << res << "\n";
}