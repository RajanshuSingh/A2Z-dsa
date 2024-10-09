#include <bits/stdc++.h>
using namespace std;

class Solution {


    int firstPosition(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                ans = mid;
                high = mid - 1;
            } else if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    int secondPosition(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1, ans = -1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] == target) {
                ans = mid;
                low = mid + 1;
            } else if (arr[mid] > target) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> result;
        int first = firstPosition(arr, target);
        int second = secondPosition(arr, target);
        result.push_back(first);
        result.push_back(second);
        return result;
    }


int count(vector<int>& arr, int n, int x) {
  Solution sol;
    vector<int> ans = sol.searchRange(arr, x);
    if (ans[0] == -1) return 0;
    return ans[1] - ans[0] + 1;
}
};