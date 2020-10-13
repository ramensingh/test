#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=7;
    for(int i=1;i<2*n;i++)
    {
        //upper triangle
        if(i<n+1)
        {
            //loop for printing spaces
            for(int k=n-i;k<n;k++)
                cout<<" ";

            //loop for printing the numbers
            for(int j=i;j<n+1;j++)
                cout<<j<<" ";

        }

        //lower triangle
        else
        {
            //loop for printing spaces
            for(int k=1;k<=14-i;k++)
                cout<<" ";

            //loop for printing the numbers
            for(int j=i;j>=n;j--)
                cout<<2*n-j<<" ";


        }
        cout<<endl;
    }
    return 0;
}
