#include<stdio.h>
int main()
{
	int a[100],i,n,x,l,h,m;
	
	printf("enter the n");
	scanf("%d",&n);
	
	printf("enter the arr");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}

printf("enter the x");
scanf("%d",&x);

l=0;
h=n-1;
m=(l+h)/2;

while(l<=h){
if(a[m]<x){
l=m+1;
}
else if(a[m]==x){
	printf("%d is found in loc %d",x,m+1);
	break;
}
else
l=m-1;
m=(l+h)/2;
}
if(l>h)
printf("not present %d",x);

return 0;
}

