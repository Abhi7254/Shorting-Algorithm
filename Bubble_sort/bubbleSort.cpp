#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main()
{
    while (1)
    {
        int n;
        cout << "Enter the size :- ";
        cin >> n;
        clock_t start, end;
        start = clock();
        int arr[n];
        srand(time(NULL));
        for (int i = 0; i < n; i++)
            arr[i] = rand();
        bubbleSort(arr, n);
        end = clock();
        cout << "Time taken for shorting = " << (end - start) << endl;
    }
    return 0;
}
