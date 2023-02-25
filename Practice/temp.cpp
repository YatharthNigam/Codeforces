#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void minimumSubarrays(int arr[], int n)
{
    char current = 'N';

    int answer = 1;

    for (int i = 1; i < n; i++)
    {
        if (current == 'N')
        {

            if (arr[i] < arr[i - 1])
            {
                current = 'D';
            }
            else if (arr[i] == arr[i - 1])
            {
                current = 'N';
            }
            else
            {
                current = 'I';
            }
        }
        else if (current == 'I')
        {
            if (arr[i] >= arr[i - 1])
            {
                current = 'I';
            }
            else
            {
                current = 'N';
                answer += 1;
            }
        }
        else
        {
            if (arr[i] <= arr[i - 1])
            {
                current = 'D';
            }
            else
            {
                current = 'N';
                answer += 1;
            }
        }
    }
    cout << answer;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    minimumSubarrays(arr, n);
    return 0;
}
