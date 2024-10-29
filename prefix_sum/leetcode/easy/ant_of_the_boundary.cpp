#include <bits/stdc++.h>

class Solution {
public:
    int returnToBoundaryCount(std::vector<int>& nums) {
        int total_sum = 0, count = 0;
        for(int i = 0; i < nums.size(); ++i){
            total_sum += nums[i];
            if(total_sum == 0){
                count++;
            }
        }
        return count;
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {3,2,-3,-4};
    int res = s.returnToBoundaryCount(nums);
    std::cout << res << "\n";
}