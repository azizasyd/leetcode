#include <bits/stdc++.h>

class Solution {
public:
    std::string mergeAlternately(std::string word1, std::string word2) {
        std::string word;

        for(int i = 0; i < word1.length() || i < word2.length(); i++){
            if(i < word1.length()){
                word.push_back(word1[i]);
            }
            if(i < word2.length()) {
                word.push_back(word2[i]);
            }
        }
        return word;
    }
};

int main() {
    Solution s;
    std::string word1 = "abc", word2 = "pqr";
    std::cout << s.mergeAlternately(word1, word2) << "\n";

    word1 = "ab";
    word2 = "pqrs";
    std::cout << s.mergeAlternately(word1, word2) << "\n";

    word1 = "abcd";
    word2 = "pq";
    std::cout << s.mergeAlternately(word1, word2) << "\n";

    return 0;
}