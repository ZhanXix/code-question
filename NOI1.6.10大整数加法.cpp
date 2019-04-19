#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	char a[201],b[201],x;
	int c[201];
	int i,na,nb,nc,flag;
	for(i=0;i<201;++i) {
		a[i]='n';
		b[i]='n';
		c[i]=0;
	}
	i=0;
	flag=0;
	x=getchar();
	while(x!='\n'){
		if(x!='0') flag=1;
		if(flag){
			a[i]=x;
			i++;
		}
		//cout << a[i-1] << "a" <<endl;//
		x=getchar();
	}
	for(i=0;i<201;++i) 
		if (a[i]=='n')
			break;
	na=i-1;
	i=0;
	flag=0;
	x=getchar();
	while(x!='\n'){
		if(x!='0') flag=1;
		if(flag) {
			b[i]=x;
			i++;
		}
		//cout << b[i-1] << "b" <<endl;//
		x=getchar();
	}
	for(i=0;i<201;++i) 
		if (b[i]=='n')
			break;
	nb=i-1;
	i=0;
	if(na==nb){
		if(na!=-1){
			for(i=na;i>=0;--i){
				c[i]+=int(a[i]-'0')+int(b[i]-'0');
				while(c[i]>=10&&i!=0){
					c[i]-=10;
					c[i-1]+=1;
				} 
			//cout << a[i] <<b[i] << c[i] <<endl;//
			}
		}
		else cout << '0';
	}
	else if(na>nb){
		nc=na-nb;
		for(i=0;i<nc;++i) c[i]=a[i]-'0';
		for(i=na;i>=nc;--i)
			c[i]+=int(a[i]-'0')+int(b[i-nc]-'0');
		for(i=na;i>=1;--i)
			while(c[i]>=10&&i!=0){
				c[i]-=10;
				c[i-1]+=1;
			} 
		//cout << a[i] <<b[i-nc] << c[i] <<endl;//
	
	}
	else{
		nc=nb-na;
		for(i=0;i<nc;++i) c[i]=b[i]-'0';
		for(i=nb;i>=nc;--i) 
			c[i]+=int(a[i-nc]-'0')+int(b[i]-'0');
		for(i=nb;i>=1;--i)
			while(c[i]>=10&&i!=0){
				c[i]-=10;
				c[i-1]+=1;
			} 
			//cout << a[i-nc] <<b[i] << c[i] <<endl;//
	}
	if(nb>na) na=nb;
	for(i=0;i<=na;++i){
		cout << c[i];
	}
	//getchar(); 
	return 0;
}
