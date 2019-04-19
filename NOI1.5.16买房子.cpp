#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int i;
	double n,k,price=200;
	cin >> n >> k;
	for(i=1;price>i*n&&i<21;++i){
		price = (1+k/100)*price;
	}
	if(i<=20) cout << i;
	else cout << "Impossible";
	getchar();
	return 0;
} 
