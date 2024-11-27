#include <stdio.h>
int main(){
	int i, n;
	int array[i];
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &i);
	if(i > 0){
		for(n = 1; n <= i; n++){
			printf("nhap array[%n]", n);
			scanf("%d", &array[n]);
		} printf("mang vua nhap: \n");
		for(n = 1; n <= i; n++){
			printf("%d", array[n]);
		}
	} else {
		printf("loi");
	}
	return 0;
}
