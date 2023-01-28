#include <iostream>
using namespace std;
int greatest(int a[], int n)
{
    int g=0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > g)
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
    greatest(arr,m);

    return 0;
}