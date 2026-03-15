#include <iostream>
using namespace std;

int main()
{
    int n, key;
    cin >> n;

    int arr[n];
    for (int i = 1; i <=n; i++)
    {
        cin >> arr[i];
    }

    cout << "search: ";
    cin >> key;

    for (int i = 1; i <=n; i++)
    {
        if (arr[i] == key)
        {
            cout << "found at index " << i << endl;
            return 0;
        }
    }

    cout << "not found" << endl;

    return 0;
}
