#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool canSplit(vector<int>& nums, int maxSum, int k) {
        int subarrayCount = 1, currentSum = 0;
        for (int num : nums) {
            currentSum += num;
            if (currentSum > maxSum) {
                currentSum = num;
                subarrayCount++;
                if (subarrayCount > k) return false;
            }
        }
        return true;
    }
    
    int splitArray(vector<int>& nums, int k) {
        int left = *max_element(nums.begin(), nums.end());
        int right = accumulate(nums.begin(), nums.end(), 0);
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (canSplit(nums, mid, k)) {
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};
