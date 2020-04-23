#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char s[21];
	//cin.get();
	cin.get(s,21);
	cin.get();
	cout<<s<<endl;
	unsigned int n = strlen(s);
	unsigned int i;
	unsigned int nr;
	i=0;
	while(i<n){
		if(s[i]>=97 && s[i]<=122){
			strcpy(s+i,s+i+1);
			nr++;
		}
		else
			i++;
	}
	if(strlen(s)){
		cout<<s<<endl;
	}
	else
		cout<<"CUVANT VID\n";
	return 0;
}
