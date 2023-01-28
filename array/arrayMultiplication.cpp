#include <iostream>
using namespace std;
main()
{   int n,r,c,y;
    cout<<"enter the size of A:"<<endl;
    cin>>n>>r;
    cout << "enter the size of B:" << endl;
    cin >> c >> y;

    int a[n][r];
    int b[c][y];
    int i, j;
    cout << "\n2D Array Input for A:\n";
    for (int i =0;i<n;i++)
    {
        for(j=0;j<r;j++)
        {
            cin>>a[i][j];
        }
    }
    cout << "\n2D Array Input for B:\n";
    for (int i = 0; i < c; i++)
    {
        for (j = 0; j < y; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "\n2D Array Output:\n";
    for (int i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            int sum = 0;

            for(int t=0;t<r;t++)
            {
                sum = sum+a[i][t]*b[t][j];
                
            }
            cout <<" "<< sum;
        }
        cout<<"\n";
    }
}