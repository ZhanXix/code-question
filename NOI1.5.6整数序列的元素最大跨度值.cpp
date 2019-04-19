#include <iostream>
#include <cstdio>
using namespace std;

#define MaxSize 100

int main(){
	int x,min,max;
	cin >> x; 
	cin >> min;
	max=min;
	while (cin >> x) {
		if (x>max) max=x;
		else if (x<min) min=x;
	}
	printf("%d",max-min); 
	getchar();
	return 0;
} 
