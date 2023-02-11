#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, minIndex, temp;
    for (i = 0; i < n - 1; i++)
    {
        minIndex = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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
        selectionSort(arr, n);
        end = clock();
        cout << "Time taken for shorting = " << (end - start) << endl;
    }
    return 0;
}
