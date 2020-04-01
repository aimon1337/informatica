#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a,b,i;
    cin>>a>>b;
    i=0;
    while(a<=b){
        a=a*3;
        b=b*2;
        ++i;
    }
    cout<<i<<"\n";
    return 0;
}