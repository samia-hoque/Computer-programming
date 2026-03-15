#include <iostream>
using namespace std;

int main() {
    int n;
    float capacity;

    cout << "Enter number of items: ";
    cin >> n;

    float weight[n], value[n], ratio[n];

    cout << "Enter weights:\n";
    for (int i = 0; i < n; i++) {
        cin >> weight[i];
    }

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value[i];
        ratio[i] = value[i] / weight[i];
    }

    cout << "Enter knapsack capacity: ";
    cin >> capacity;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ratio[i] < ratio[j]) {
                float temp;

                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;

                temp = value[i];
                value[i] = value[j];
                value[j] = temp;
            }
        }
    }

    float totalValue = 0;

    for (int i = 0; i < n; i++) {
        if (capacity >= weight[i]) {
            capacity = capacity - weight[i];
            totalValue = totalValue + value[i];
        } else {
            totalValue = totalValue + ratio[i] * capacity;
            break;
        }
    }

    cout << "Maximum value in knapsack = " << totalValue;

    return 0;
}
