//Bryant Garcia
//
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
	int x = 0;
	double y = 0.3;
	float a = 0.2;
	char b = 'a';
	int arr[10] = {7};

	printf("the value of x is %d and it's address is %p \n",x,&x);
	printf("the value of y is %f and it's address is %p \n",y, &y);
	printf("the value of a is %f and its address is %p \n",a,&a);
	printf("the value of b is %d and its address is %p \n",b,&b);

	{
		int what = 0;
	}

	//printf("%d",what,&what);
	

	for(int i = 0; i< 10;i++){
		printf("address of arr[%d] = %p \n",arr[i],&arr[i]);
	}

	return EXIT_SUCCESS;

}
