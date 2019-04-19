#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long i,j=1,day=0,n,money=0;
	cin >> n;
	for(i=0;i<n;++i){
		if(day<j)	
			day++;
		else{
			day=1;
			j++;
		}
		money+=j;
	}
	cout << money << endl;
	getchar();
	return 0;
}
