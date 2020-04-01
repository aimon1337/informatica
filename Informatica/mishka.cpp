#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
	scanf("%d", &n);
	int m = 0,c = 0;
	for(int i = 0;i <n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		if(a > b)
			m++;
		else if (b > a)
			c++;
	}
	if(m > c)
		printf("Mishka");
	else if(c > m)
		printf("Chris");
	else
		printf("Friendship is magic!^^");
	return 0;
}