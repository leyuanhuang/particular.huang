#include<stdio.h>
void qwe(char a[]);
int main(){
	char a[20],i;
	gets(a);
	qwe(a);
	i=sizeof(a)/sizeof(a[0]);
	printf("%d\n",i);
}
void qwe(char a[]){
	int i;
	i=sizeof(a)/sizeof(a[0]);
	printf("%d\n",i);
}