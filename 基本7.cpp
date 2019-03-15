#include<stdio.h>
#include<stdlib.h>
 
int main()
{
	int s,a,b;
	printf("Show the sum of 1+2+3....n\n");
	printf("n is ?\n");
	scanf("%d",&s);
	for(int a=1;a<=s;a++)
	b+=a;
	printf("the sum is %d\n",b);
	system("pause");
	return 0;

}
