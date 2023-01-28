#include<iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    int arr[m];
    //int n = m.size();
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < m; i++)
    {
        cout << arr[i];
    }
}