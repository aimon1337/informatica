#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
ifstream fin("bac.txt");
int main(){
	int x;
	int i=0;
	int v[101];
	bool ok=false;
	while(fin>>x){
		if(abs(x)==x && x!=0){
		//if(x>0){
			v[i]=x;
			i++;
			ok=true;
		}
	}
	fin.close();
	bool sortat;
	do
	{
	  sortat = true;
	  for(int j = 0 ; j < i - 1 ; j ++)
		if(v[j] > v[j+1])
		{
		  int aux = v[j];
		  v[j] = v[j+1];
		  v[j+1] = aux;
		  sortat = false;
		}
	}
	while(!sortat);
	if(ok==true)
		for(int j=0;j<i;++j)
			cout<<v[j]<<" ";
	else
		cout<<"NU EXISTA";
	cout<<'\n';
	return 0;
}
