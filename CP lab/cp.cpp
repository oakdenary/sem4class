#include <iostream>
#include <map>
#include <vector>
using namespace std;

int findKthLargest(vector<int>& nums, int k) {

    map<int, int> freq;
    for (int i = 0; i < nums.size(); i++) {
        freq[nums[i]]++;
    }

    map<int, int>::reverse_iterator it;
    for (it = freq.rbegin(); it != freq.rend(); it++) {
        k = k - (*it).second;
        if (k <= 0) {
            return (*it).first;
        }
    }

    return -1;
}

int main() {
    int n, k;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cin >> k;

    int result = findKthLargest(nums, k);
    cout << result << endl;

    return 0;
}