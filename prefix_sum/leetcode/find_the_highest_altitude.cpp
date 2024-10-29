#include <bits/stdc++.h>

class Solution {
public:
    int largestAltitude(std::vector<int>& gain) {
        int max_alt = 0, curr_alt = 0;
        for(int g : gain){
            curr_alt += g;
            max_alt = std::max(max_alt, curr_alt);
        }
        return max_alt;
    }
};

int main(){
    Solution s;
    std::vector<int> gain = {-5,1,5,0,-7};
    int res = s.largestAltitude(gain);
    std::cout << res << "\n";
}