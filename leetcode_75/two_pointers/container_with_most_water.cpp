#include <bits/stdc++.h>

class Solution {
public:
    int maxArea(std::vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int max_area = 0;

        while (left < right) {
            int width = right - left;
            int area = width * std::min(height[left], height[right]);
            max_area = std::max(max_area, area);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_area;
    }
};

int main(){
    Solution s;
    std::vector<int> height = {1,8,6,2,5,4,8,3,7};
    int res = s.maxArea(height);
    std::cout << res << "\n";
}