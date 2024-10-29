#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end());
        int right = accumulate(weights.begin(), weights.end(), 0);
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            int currentWeight = 0, requiredDays = 1;
            
            for (int weight : weights) {
                if (currentWeight + weight > mid) {
                    requiredDays++;
                    currentWeight = 0;
                }
                currentWeight += weight;
            }
            
            if (requiredDays <= days) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        
        return left;
    }
};
