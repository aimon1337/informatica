#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main(){
    int stof = 0, ftos=0;
    string s;
    int n; cin>>n;
    cin>>s;
    for (int i=1 ;i<=n;++i){
        if (s.substr(i,2) == "SF")
            stof++;
        else
        {
            if(s.substr(i,2) == "FS")
                ftos++;
        }
        
    }
    if(stof>ftos)
        cout<<"YES\n";
    else
    {
        cout<<"NO\n";
    }
    
}