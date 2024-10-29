#include <bits/stdc++.h>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
        int total_sum = 0;

        for(int i = 0; i < nums.size(); ++i){
            total_sum += nums[i];
        }

        int left_sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(left_sum == total_sum - left_sum - nums[i]){
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
