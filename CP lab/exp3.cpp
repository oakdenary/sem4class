#include <iostream>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for (int x : nums) sum += x;
        if (sum % 2 != 0) return false;
        int target = sum / 2;
        vector<bool> dp(target + 1, false);
        dp[0] = true;
        for (int num : nums) {
            for (int j = target; j >= num; j--) {
                dp[j] = dp[j] || dp[j - num];
            }
        }
        return dp[target];
    }
};

int main() {
    string s;
    getline(cin, s);

    vector<int> nums;
    int num = 0;
    bool inNumber = false;

    for (char c : s) {
        if (isdigit(c)) {
            num = num * 10 + (c - '0');
            inNumber = true;
        } else {
            if (inNumber) {
                nums.push_back(num);
                num = 0;
                inNumber = false;
            }
        }
    }

    Solution obj;
    cout << (obj.canPartition(nums) ? "true" : "false");
    return 0;
}