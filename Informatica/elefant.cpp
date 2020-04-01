#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main(){
    int x;
    cin>>x;
    int i=0;
    int mv=0;
    while(i<x){
        i+=5;
        mv++;
    }
    cout<<mv<<"\n";
}