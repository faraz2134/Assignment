#include <iostream>
using namespace std;

class Solution {
public:
    int findPosition(int num) {
        if (num <= 0 || (num & (num - 1)) != 0) {
            return -1; 
        }
        
        int pos = 1;
        while ((num & 1) == 0) {
            num >>= 1;
          pos++;
        }
        return pos;
    }
};

int main() {
    Solution solution;
    int num = 16; 
    int pos solution.findPosition(num);
    if (pos == -1) {
        cout << "no exact same bit" << endl;
    } else {
        cout << "position of only set bit " << pos << endl;
    }
    return 0;
}
