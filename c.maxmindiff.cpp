#include<stdio.h>
int main()
{
	int a[100],n,i,min,max,diff;
	
	printf("enter the n");
	scanf("%d",&n);
	
	printf("enter the arr");
	for(i=0; i<n; i++){
	scanf("%d",&a[i]);
}
min=999;
max=0;

for(i=0;i<n;i++){
if(max<a[i]){
max=a[i];
}
}

for(i=0;i<n;i++){
	if(min>a[i]){
	min=a[i];
}
}
diff=max-min;
printf("%d is the diff",diff);
return 0;
}
