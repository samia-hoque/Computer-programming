#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[100], dp[100];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        dp[i] = 1;
    }

    // LIS Logic
    for (int i = 1; i < n; i++) {

        for (int j = 0; j < i; j++) {

            if (arr[i] > arr[j] && dp[j] + 1 > dp[i]) {
                dp[i] = dp[j] + 1;
            }
        }
    }

    int ans = dp[0];

    for (int i = 1; i < n; i++) {
        if (dp[i] > ans) {
            ans = dp[i];
        }
    }

    cout << "Length of LIS = " << ans;

    return 0;
}
