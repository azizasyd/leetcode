#include <bits/stdc++.h>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
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
    std::vector<int> nums = {1,7,3,6,5,6};
    int res = s.pivotIndex(nums);
    std::cout << res << "\n";
}