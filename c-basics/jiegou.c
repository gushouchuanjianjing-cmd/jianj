#include<stdio.h>
struct a{
	char name[20];
	int score;
};
int main(){
	struct a a1={"mast",99};
	struct a*p=&a1;
	printf("变量访问:%s\n",a1.name);
	printf("指针访问：%d\n",p->score);
	return 0;
}