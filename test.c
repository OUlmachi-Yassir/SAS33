#include<stdio.h>

int main() {
	int i,j,a;
	printf("donner le nbr de ligne et colone :");
	scanf("%d",&a);
	for(i=1;i<a;i++){
		for(j=1;j<a;j++){
			printf("* ");
			
		}
		printf("\n");
	}
	
	return 0;
}