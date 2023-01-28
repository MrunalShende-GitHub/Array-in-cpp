#include <iostream>
using namespace std;
int search(int a[], int n,int x)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]==x)
        {
            cout<<"Number :"<<x<<" found at location :"<<i<<endl;
        }
    }
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
    int k;
    cout<<"Enter the number you want to search: ";
    cin>>k;
    search(arr, m,k);

    return 0;
}