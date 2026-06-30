#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int nums[n];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    // Sort the array
    sort(nums, nums + n);

    for (int i = 0; i < n - 3; i++) {

        // Skip duplicate first element
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        for (int j = i + 1; j < n - 2; j++) {

            // Skip duplicate second element
            if (j > i + 1 && nums[j] == nums[j - 1])
                continue;

            for (int k = j + 1; k < n - 1; k++) {

                // Skip duplicate third element
                if (k > j + 1 && nums[k] == nums[k - 1])
                    continue;

                for (int l = k + 1; l < n; l++) {

                    // Skip duplicate fourth element
                    if (l > k + 1 && nums[l] == nums[l - 1])
                        continue;

                    if (nums[i] + nums[j] + nums[k] + nums[l] == target) {

                        cout << nums[i] << " "
                             << nums[j] << " "
                             << nums[k] << " "
                             << nums[l] << endl;
                    }
                }
            }
        }
    }

    return 0;
}