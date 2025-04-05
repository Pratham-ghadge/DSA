#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigitOne(int n) {
        int count = 0;
        for (int i = 1; i <= n; i++) {
            int num = i;
            while (num > 0) {
                int digit = num % 10;
                if (digit == 1) {
                    count++;
                }
                num /= 10;  // Move to the next digit
            }
        }
        return count;
    }
};

int main() {
    Solution s;
    cout << "Start execution\n";
    int n = 13;
    int ans = s.countDigitOne(n);
    cout << "Total count of digit 1: " << ans << endl;
    return 0;
}
