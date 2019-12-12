#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
    int a,b,c;
    cin>>a;
    for(int i=0;i<a;i++)
    {
        cin>>b>>c;

            if(b==1 && c==1)
            {
                cout<<"Yes";
            }
            else if (b==2 && c==3)
            {
               cout<<"Yes";

            }
            else if (b>3)
            {
                cout<<"Yes";

            }
            else
            {
                cout<<"No";
            }



    }
    return 0;
}
