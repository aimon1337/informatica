#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t; cin>>t;
    ll a,b,x,y;
    while (t--){
        cin>>a>>b>>x>>y;
        x++;
        y++;
        ll aa = a * (y-1);
        ll bb = a * abs(b-y);
        ll cc = b * (x-1);
        ll dd = b * abs(a - x);
        ll ans = max (aa,bb);
        ans = max(ans, cc);
        ans = max(ans, dd);
        cout<<ans<<'\n';
    }
    return 0;
}