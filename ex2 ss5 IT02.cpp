#include <stdio.h>

int main(){
	int n = 65;
	int number;
	do{
		printf("nhap so :");
		scanf("%d", &number);
		
		if(n!=number){
			printf("sai roi moi nhap lai ");
		}
	}while(n!=number);
		printf("ban doan dung roi");
	
    return 0;
}
