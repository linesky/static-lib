#include <stdlib.h>
#include <stdio.h>
#include <dlfcn.h>
int adds(int a,int b);
int subs(int a,int b);
int mults(int a,int b);
int divs(int a,int b);
int main(){
	printf("add:%d\n",adds(10,10));
	printf("sub:%d\n",subs(10,1));
	printf("mul:%d\n",mults(10,10));
	printf("div:%d\n",divs(10,2));
	return 0;
}
