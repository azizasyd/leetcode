#include <bits/stdc++.h>

class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int left = 0; // for zeroes
        for(int right = 0; right < nums.size(); ++right){
            if(nums[right] != 0){
                std::swap(nums[left], nums[right]);
                left++;
            }
        }
        for(int right = left; right < nums.size(); ++right){
            nums[right] = 0;
        }
    }
};

int main(){
    Solution s;
    std::vector<int> nums = {0,1,0,3,12};
    s.moveZeroes(nums);

    for(int num : nums){
        std::cout << num << " ";
    }
    std::cout << "\n";
};