#include <iostream>
using namespace std;
int f(unsigned int a){
	unsigned int d=2;
	unsigned int fr[1000]={0};
	unsigned short s=0;
	while(a>1){
		while(a%d == 0){
			fr[d]++;
			a=a/d;
			}
		++d;
		//if(a>1 && d*d > a)
			//d=a;
		}
	for(d=0;d<=1000;++d)
		s+=fr[d];
	return s;
}
int main(){
	//unsigned int n;
	
	cout<<f(917)<<endl;
	cout<<f(971)<<endl;
	cout<<f(719)<<endl;
	return 0;
}

