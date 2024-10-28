#include <bits/stdc++.h>

class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int max_num = *std::max_element(candies.begin(), candies.end());

        std::vector<bool> res;
        for(int i = 0; i < candies.size(); ++i){
            if(candies[i] + extraCandies >= max_num){
                res.push_back(true);
            } else {
                res.push_back(false);
            }
        }
        return res;
    }
};

int main(){
    Solution s;

    std::vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    std::vector<bool> res = s.kidsWithCandies(candies, extraCandies);
    for(bool r : res){
        std::cout << (r ? "true" : "false") << " ";
    }
    std::cout << "\n";
}