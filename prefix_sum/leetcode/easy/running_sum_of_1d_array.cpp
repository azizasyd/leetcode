#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        for(int i = 1; i < nums.size(); ++i){
            nums[i] += nums[i-1];
        }
        return nums;
    }
};

int main(){
    Solution s;

    std::vector<int> nums = {1,2,3,4};

    std::vector<int> sum = s.runningSum(nums);

    for(int num : sum){
        std::cout << num << " ";
    }
    std::cout << "\n";
}