#include<stdio.h>
int main()
{
	int a[100],n,i,x,flag;
	
	printf("enter the n");
	scanf("%d",&n);
	
	printf("enter the arr");
	for(i=0; i<n; i++){
	
	scanf("%d",&a[i]);
}

printf("enter the x");
scanf("%d",&x);

for(i=0;i<n;i++){
if(a[i]==x){
flag=1;
break;
}
}
if(flag==1)
printf("%d",a[i]);
else
printf("not found");
}

