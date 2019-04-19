#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	long m,n,x;
	long up,day=0;
	cin >> m >> n >> x;
	while(x>0&&day<m) {
		--x;
		day+=n;
		//cout << day <<endl;//
	}
	if(day>m) day =m;
	//cout << day <<endl;//
	while(day==m){
		up = m/n;
		n += up;
		//cout << "n=" << n<<endl;//
		day = 0;
		while(x>0&&day<m) {
			--x;
			day+=n;
			//cout << day <<endl;//
		}
		if(day>m) day = m;
		//cout << day << m <<endl;//
	}
	cout << n;
	getchar();
	return 0;
}
