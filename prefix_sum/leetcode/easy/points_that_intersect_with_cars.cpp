#include <bits/stdc++.h>

class Solution {
public:
    int numberOfPoints(std::vector<std::vector<int>>& nums) {
        std::set<int> st;
        for(auto car : nums){
            int start = car[0];
            int end = car[1];

            for(int i = start; i <= end; ++i){
                st.insert(i);
            }
        }
        return st.size();
    }
};

int main(){
    Solution s;
    std::vector<std::vector<int>> nums = {{3,6}, {1,5}, {4,7}};
    int res = s.numberOfPoints(nums);
    std::cout << res << "\n";
}