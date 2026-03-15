#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of activities: ";
    cin >> n;

    int start[n], finish[n];

    cout << "Enter start times:\n";
    for (int i = 0; i < n; i++) {
        cin >> start[i];
    }

    cout << "Enter finish times:\n";
    for (int i = 0; i < n; i++) {
        cin >> finish[i];
    }

    cout << "Selected activities:\n";

    int i = 0;
    cout << i << " ";

    for (int j = 1; j < n; j++) {
        if (start[j] >= finish[i]) {
            cout << j << " ";
            i = j;
        }
    }

    return 0;
}
