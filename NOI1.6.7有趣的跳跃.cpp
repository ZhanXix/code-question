#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int n,i,j;
	cin >> n;
	if(n==1||n==2){
		long a;
		cin >> a;
		cout << "Jolly";
	}
	else{
		long x[n],y[n-1],temp;
		bool flag=1;
		for(i=0;i<n;++i) cin >> x[i];
		for(i=0;i<n-1;++i) {
			y[i] = abs(x[i]-x[i+1]);
			//cout << y[i] <<endl;
		}
		for(i=0;i<n-1;++i){
			for(j=0;j<n-i-2;++j){
				if(y[j]>y[j+1]){
					temp = y[j];
					y[j] = y[j+1];
					y[j+1] = temp;
				}
			}
		}
		for(i=0;i<n-1;++i){
			//cout << y[i] <<endl;
			if (y[i]!=i+1){
				flag=0;break;
			}
		}
		if(flag==1) cout << "Jolly";
		else cout << "Not jolly";
	}	
	getchar();
	return 0;
}
