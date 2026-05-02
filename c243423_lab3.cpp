#include <iostream>
using namespace std;

void A(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int p = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > p)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = p;
    }
}

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    A(arr, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
