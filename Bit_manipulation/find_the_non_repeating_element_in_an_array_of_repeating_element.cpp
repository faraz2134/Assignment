#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int findSingleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result=result^num;
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 3, 5, 4, 5, 8,7 };
    cout << "The non-repeating element is: " << solution.findSingleNumber(nums) << endl;
    return 0;
}
