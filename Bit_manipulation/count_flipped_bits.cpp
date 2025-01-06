#include <iostream>
using namespace std;

class Solution {
public:
    int countFlippedBits(int a, int b) {
        int xorValue = a ^ b; 
        int count = 0;
        
        while (xorValue > 0) {
            count += (xorValue & 1); 
            xorValue >>= 1;         
        }
        
        return count;
    }
};
