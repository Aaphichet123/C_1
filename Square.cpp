#include <stdio.h>

int  base,wide;
float square;

main(){
	printf("Enter Base:");
	scanf("%d", &base);
	printf("Enter Wide:");
	scanf("%d",&wide);
	square = base*wide;
	printf("Base=%d \n Wide=%d \n Square= %.2f",base,wide,square);
}
