#include <iostream>
using namespace std;
main()
{   int n,m,x,y;
    cout<<"enter the size of A:"<<endl;
    cin>>n>>m;
    cout << "enter the size of B:" << endl;
    cin >> x >> y;

    int a[n][m];
    int b[x][y];
    int i, j;
    cout << "\n2D Array Input for A:\n";
    for (int i =0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout << "\n2D Array Input for B:\n";
    for (int i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            cin >> b[i][j];
        }
    }

    cout << "\n2D Array Output:\n";

    for (int i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout<< a[i][j]+b[i][j]<<" ";
        }
        cout<<"\n";
    }
}