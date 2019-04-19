#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int main(){
	double a,b,c,x1,x2;
	cin >> a >> b >> c;
	if (b*b==4*a*c){
		x1 = (0-b + sqrt(b*b-4*a*c))/(2*a);
		printf("x1=x2=%.5lf",x1);
	}
	else if (b*b>4*a*c){
		x1 = (0-b + sqrt(b*b-4*a*c))/(2*a);
		x2 = (0-b - sqrt(b*b-4*a*c))/(2*a);
		printf("x1=%.5lf;x2=%.5lf",x1,x2);
	}
	else{
		x1 = 0-b / (2*a);
		x2 = sqrt(4*a*c-b*b) / (2*a);
		printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi",x1,x2,x1,x2);
	}
	getchar();
	return 0;
} 
