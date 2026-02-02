#include <iostream>
using namespace std;

int main()
{
    int a[50], n, key;
    int left, right, mid;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements in sorted order:\n";
    for(int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter element to search: ";
    cin >> key;

    left = 0;
    right = n - 1;

    while(left <= right)
    {
        mid = (left + right) / 2;

        if(a[mid] == key)
        {
            cout << "Element found at position " << mid;
            return 0;
        }
        else if(key < a[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }

    cout << "Element not found";

    return 0;
}
