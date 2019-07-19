#include <stdio.h>
//pointer practice

int * arrpass(){
	int testarry[4];
	for (int i = 0; i < 4; i++){
		//testarry[i] = rand();
		testarry[i] = i;
	}
	return testarry;

}
int main()
{
	int *ptr;

	int h = 5;
	int h_address = &h;
	ptr = h_address;

	printf("This is the address: %d\n",ptr);
	printf("This is the value: %d\n", *ptr);
	int *tstptr;
	tstptr = arrpass();
	printf("This is the first element: %d", *(tstptr));
	printf("This is the second element: %d", *(tstptr+1));//incorrect, need to fix
	return 0;

}