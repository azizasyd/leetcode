#include <bits/stdc++.h>

class Solution {
public:
    int maxOperations(std::vector<int>& nums, int k) {

        std::sort(nums.begin(), nums.end());

        int left = 0, right = nums.size() - 1;

        int count = 0;
        while(left < right){
            int sum = nums[left] + nums[right];
            if(sum == k){
                count++;
                left++;
                right--;
            } else if(sum < k){
                left++;
            } else {
                right--;
            }
        }
        return count;
    }
};


int main(){
    Solution s;

    std::vector<int> nums = {1,2,3,4};
    int k = 5;

    int res = s.maxOperations(nums, k);
    std::cout << res << "\n";
}