#include<stdio.h>

int hcf(int n1, int n2)
{
	if(n2!=0)
		return hcf(n2,n1%n2);
	else
		return n1;
}

int main()
{
	int n1,n2;
	printf("Enter Number:");
	scanf("%d %d",&n1,&n2);
	int h=hcf(n1,n2);
	printf("%d",h);
	return 0;
}
