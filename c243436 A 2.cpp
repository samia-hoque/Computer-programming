#include <iostream>
using namespace std;

int main()
{
    int n, key;


    cin >> n;

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    cout << "search: ";
    cin >> key;

    int low = 1, high = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "Found at index " << mid << endl;
            return 0;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << "Not found" << endl;
    return 0;
}
