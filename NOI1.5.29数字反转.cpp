#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long n,c=0,i,j,jf=0;			
	int x[9];
	for(i=0;i<9;++i) x[i]=0;
	cin >> n;
	if(n<0){
		cout << '-';
		n=0-n;
	}
	for(i=0;i<9&&n>0;++i){
		x[i] = n%10;
		n = n/10;
	}
	for(i=8;i>=0;--i) if(x[i]!=0) break;
	for(j=0;j<=i;++j){
		if (x[j]!=0) jf=1;
		if (jf){
			c = c*10 + x[j];
		}
	}
	cout << c;
	getchar();
	return 0;
}
