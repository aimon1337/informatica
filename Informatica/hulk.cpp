#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
    int n;
    cin>>n;
 
    for(int i=1;i<=n;i++)
    {
        int pos=i%2;
        if(pos==1)
        {
            cout<<"I hate ";
        }
        else if(pos==0)
        {
            cout<<"I love ";
        }
        if(i!=n)
        {
            cout<<"that ";
        }
    }
    cout<<"it"<<endl;
    return 0;
}
