#include <iostream>
using namespace std;
int printarray(int aa[],int q)
{
    for(int i =0;i<q;i++)
    {
        cout<<aa[i]<<" ";
    }
}
int reverse(int a[], int n,int s,int e)
{
   if(s >= e)
   {
       printarray(a, n);
   }
   else{
   int temp = a[s];
   a[s] = a[e];
   a[e] = temp;
   reverse(a,n,s+1,e-1);
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
    int start = 0;
    int end = m-1;
    reverse(arr, m, start, end);

    return 0;
}