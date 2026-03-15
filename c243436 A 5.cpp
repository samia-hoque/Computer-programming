#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int low = 0, high = n - 1;
    int stack[n];
    int top = -1;
    stack[++top] = low;
    stack[++top] = high;
    while (top >= 0)
    {
        high = stack[top--];
        low = stack[top--];
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++)
        {
            if (arr[j] <= pivot)
            {
                i++;
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        int temp = arr[i + 1];
        arr[i + 1] = arr[high];
        arr[high] = temp;
        int p = i + 1;
        if (p - 1 > low)
        {
            stack[++top] = low;
            stack[++top] = p - 1;
        }
        if (p + 1 < high)
        {
            stack[++top] = p + 1;
            stack[++top] = high;
        }
    }
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
