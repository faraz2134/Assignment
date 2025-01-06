#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<vector<int>> powerSet(vector<int>& nums) {
        int n = nums.size();
        int totalSubsets = 1 << n;
        vector<vector<int>> result;
 for (int i = 0; i < totalSubsets; i++) {
            vector<int> subset;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) { 
                    subset.push_back(nums[j]); }}
            result.push_back(subset)}
        return result;
    }};
