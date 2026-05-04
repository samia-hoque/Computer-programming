#include <iostream>
using namespace std;

int main() {

    int n;

    // rod length
    cout << "Enter rod length: ";
    cin >> n;

    int price[n + 1];

    // price input
    cout << "Enter prices:\n";

    for (int i = 1; i <= n; i++) {
        cin >> price[i];
    }

    int dp[n + 1];

    dp[0] = 0;

    // DP calculation
    for (int i = 1; i <= n; i++) {

        int maximum = price[i];

        for (int j = 1; j < i; j++) {

            if (maximum < price[j] + dp[i - j]) {
                maximum = price[j] + dp[i - j];
            }
        }

        dp[i] = maximum;
    }

    cout << "Maximum profit = " << dp[n];

    return 0;
}
