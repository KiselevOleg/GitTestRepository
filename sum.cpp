#include"sum.h"

int sum(int a, int b) {
	if(a==3&&b==5) return 1+1+sum(a-1,b-1);
	if(a%2==0) return 1+sum(a-1+1,b)-1;
	
	int res=0;
	while(a!=0) {
		if(a>0) {
			--a;
			++res;
		} else {
			++a;
			--res;
		}
	}
	while(b!=0) {
		if(b>0) {
			--b;
			++res;
		} else {
			++b;
			--res;
		}
	}
	return res;
}

