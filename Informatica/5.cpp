#include <bits/stdc++.h>
using namespace std;
const int mxN = 1e4;
int a[mxN][mxN],n,m,x,y;
int D[mxN];
int L[mxN][mxN];
int i,j;
void citire(){
    cout<<"Numarul de noduri: "; cin>>n;
    cout<<"Numarul de muchii: "; cin>>m;
    for(i=1;i<=n;++i)
        for(j=1;j<=n;++j)
            a[i][j]==0;
    for(i=1;i<=m;++i){
        cout<<"Dati extremitatile muchiei "<<i<<" ";
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
        D[x]++;
        D[y]++;
    }
    cout<<"\n";
}
void grad(){
    cout<<"a) ";
    for(i = 1; i<=n ;++i){
        cout<<D[i]<<" ";
    }
    cout<<endl;
}
void gradpar(){
    cout<<"b) ";
    for(i=1;i<=n;++i){
        if(D[i]%2==0)
            cout<<i<<" ";
    }
    cout<<"\n";
}
void gradi(){
    cout<<"c) ";
    for(i=1;i<=n;++i)
        if(D[i]==0)
            cout<<i<<" ";
    cout<<endl;
}
void gradt(){
    cout<<"d) ";
    for (i=1;i<=n;i++)
        if(D[i]==1)
            cout<<i<<" ";
    cout<<"\n";
}
int egi(){
    cout<<"e) ";
    bool ok=false;
    for(i = 1; i<=n;++i)
        if (D[i]==0)
            ok=true;
    return ok;
}
int egt(){
    cout<<"f) ";
    bool ok=false;
    for(i = 1; i<=n;++i)
        if (D[i]==1)
            ok=true;
    return ok;
}
int egint(){
    cout<<"g) ";
    bool ok = false;
    for(i=1;i<=n;++i)
        if(D[i]!=0 && D[i]!=1)
            ok=true;
    return ok;
}
int totiz(){
    cout<<"h) ";
    bool ok=true;
    for(i = 1; i<=n; ++i)
        if(D[i]!=0)
            ok=false;
    return ok;
}
int totint(){
    cout<<"i) ";
    bool ok=true;
    for(i = 1; i<=n; ++i)
        if(D[i]==0 || D[i]==1)
            ok=false;
    return ok;
}
void grvf(){
    cout<<"j) ";
    int v;
    cin>>v;
    cout<<D[v]<<" ";
    cout<<endl;
}
void ln(){
    int k;
    for (i=1;i<=n;i++){
        k=0;
        for (j=1;j<=n;j++)
            if (a[i][j]==1){
                k=k+1 ;
                L[i][k]=j;
            }
    }
}
void nd(){
    ln();
    cout<<"k) ";
    int nd;
    cin>>nd;
    for(j=1;j<=n;++j)
        if(a[nd][j])
            cout<<j<<" ";
    cout<<endl;
}
void veriff(){
    cout<<"l) ";
    for(i=1;i<=n;++i)
        if(D[i] != 0 && D[i] != 1)
            cout<<"Varful "<<i<<" este interior"<<endl;
            else
                if(D[i]==0)
                    cout<<"Varful "<<i<<" este izolat"<<endl;
                else
                    if(D[i]==1)
                        cout<<"Varful "<<i<<" este terminal"<<endl;
}
void gradmax(){
    cout<<"m) ";
    int maxl=-1;
    for(i=1;i<=n;++i)
        if(D[i]>maxl)
            maxl=D[i];
    cout<<maxl<<endl;
    for(i=1;i<=n;++i)
        if(D[i]==maxl)
            cout<<i<<" ";
    cout<<endl;
}
void frecvgrad(){
    cout<<"n) ";
    int n1,n2,n3;
    n1=n2=n3=0;
    for(i=1;i<=n;++i){
        if(D[i]==0)
            n1++;
        else if(D[i]==1)
                n2++;
             else if(D[i] != 0 && D[i] != 1)
                 n3++;
    }
    cout<<"Noduri izolate: "<<n1<<endl;
    cout<<"Noduri terminale: "<<n2<<endl;
    cout<<"Noduri interioare:"<<n3<<endl;
}
void veriford(){
    cout<<"o) ";
    bool ok=true;
    int g[mxN];
    for(i=1;i<=n;++i)
        cin>>g[i];
    for(i=1;i<=n;++i)
        if(g[i]!=D[i])
            ok=false;
    if(ok == false)
        cout<<"Nu sunt in ordine"<<endl;
    else if(ok==true)
            cout<<"Sunt in ordine"<<endl;
}
void verifnord(){
    bool ok = false;
    cout<<"p) ";
    int g[mxN];
    for(i=1;i<=n;++i)
        cin>>g[i];
    sort(g,g+n);
    sort(D,D+n);
    for(i=1;i<=n;i++)
        if(D[i]==g[i]){
            ok=true;}
    if(ok == true)
        cout<<"Reprezinta"<<endl;
    else
    {
            cout<<"Nu reprezinta"<<endl;
    }
}
int main(){
    citire();
    grad();
    gradpar();
    gradi();
    gradt();
    if(egi()==true) cout <<"DA"<<endl; else cout<<"NU"<<endl;
    if(egt()==true) cout <<"DA"<<endl; else cout<<"NU"<<endl;
    if(egint()==true) cout <<"DA"<<endl; else cout<<"NU"<<endl;
    if(totiz()==true) cout <<"DA"<<endl; else cout<<"NU"<<endl;
    if(totint()==true) cout <<"DA"<<endl; else cout<<"NU"<<endl;
    grvf();
    nd();
    veriff();
    gradmax();
    veriford();
    verifnord();
    return 0;
}