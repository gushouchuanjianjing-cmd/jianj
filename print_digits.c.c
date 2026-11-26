#include<stdio.h>
void print_digits(int n){
	if(n<0){
		printf("-");
		n=-n;
	}
	if(n<10&&n>=0){
		printf("%d",n);
		return;
	}
	printf("%d ",n%10);
	print_digits(n/10);
}
int main(){
	print_digits(8999); //9 9 9 8
	printf("\n");
	return 0;
}