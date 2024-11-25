#include <stdio.h>

int main(){
	int n;
	printf("nhap bang nhan so tu 1 den 10 :");
	scanf("%d", &n);
	
	if(n<1||n>10){
		printf("so ko hop le moi nhap lai:");
	
	}
	for(int i=1;i<=10;i++){
		printf("%d*%d=%d\n",i,n,i*n);
	}
	return 0;
}
