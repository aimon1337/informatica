#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    bool ok=false;
    for(int i=0; i<n; ++i){
        if(a[i]==1)
            ok=true;
    }
    if(ok==true)
        cout<<"HARD"<<endl;
    else
    {
        cout<<"EASY"<<"\n";
    }
    
}