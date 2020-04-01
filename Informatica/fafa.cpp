#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,r=0;
    while(cin>>n)
    {
        for(int i=1;i<n;i++)
        {
            if(n%i==0)
                r++;
        }
        cout<<r<<endl;
        r=0;
        return 0;
    }
}