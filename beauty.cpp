#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int totalBeauty = 0;
        for (int i = 0; i < s.size(); i++) {
            vector<int> freq(26, 0);
            for (int j = i; j < s.size(); j++) {
                freq[s[j] - 'a']++;
                int maxFreq = *max_element(freq.begin(), freq.end());
                int minFreq = s.size();
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > 0) {
                        minFreq = min(minFreq, freq[k]);
                    }
                }
                totalBeauty += maxFreq - minFreq;
            }
        }
        return totalBeauty;
    }
};
