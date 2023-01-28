#include <iostream>
using namespace std;
int smallest(int a[], int n)
{
    int g ;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < g)
        {
            g = a[i];
        }
    }
    cout << g;
}
int main()
{
    int m;
    cin >> m;
    int arr[m];
    // int n = m.size();
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    smallest(arr, m);

    return 0;
}