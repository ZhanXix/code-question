#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	float x[3],y[3],s[3],p;
	int i;
	for(i=0;i<3;++i)
		cin >> x[i] >> y[i];
	for(i=0;i<3;++i)
		s[i] = sqrt((x[i]-x[(i+1)%3])*(x[i]-x[(i+1)%3])+(y[i]-y[(i+1)%3])*(y[i]-y[(i+1)%3]));
	p = (s[0]+s[1]+s[2])/2;
	printf("%.2f",sqrt(p*(p-s[0])*(p-s[1])*(p-s[2])));
	getchar();
	return 0;
} 
