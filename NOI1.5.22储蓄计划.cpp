#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	int money=0,cost,save=0,nsave; //money «°≠°≠ 
	int i;
	for(i=0;i<12;++i){
		money += 300;
		cin >> cost;
		if (money-cost<0) break;
		if (money-cost>=100){
			nsave=(money-cost)/100*100;
			money-=nsave;
			save+=nsave;
			//cout << money << " " << save << " " << nsave << endl;
		}
		money-=cost;
	}
	if(i<12) {
		while(cin>>nsave);
		cout << '-' << i+1;
	}
	else cout << money+save/10*12;
	getchar();
	return 0;
}
