#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target)
                return {left + 1, right + 1};
            else if (sum < target)
                left++;
            else
                right--;
        }

        return {};
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int target;
    cin >> target;

    Solution obj;
    vector<int> result = obj.twoSum(numbers, target);

    if (!result.empty()) {
        cout << result[0] << " " << result[1] << endl;
    }

    return 0;
}