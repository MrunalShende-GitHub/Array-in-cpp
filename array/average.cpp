#include <iostream>
using namespace std;
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
    int sum=0;
    int average;
    for (int i = 0; i < m; i++)
    {
        sum = sum + arr[i];
    }
    average = sum / m;
    cout<<average;
        

    return 0;
}