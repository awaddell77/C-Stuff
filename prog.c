#include <stdio.h>
//pointer practice

int arrpass(int testarry[]){
	//int testarry[4]; //could only pass back if it had been declared as a static variable rather than just a local one
	for (int i = 0; i < 4; i++){
		//testarry[i] = rand();
		testarry[i] = i+1;
	}
	return testarry;

}
int * arrpassB(){
	int testarry[4]; //could only pass back if it had been declared as a static variable rather than just a local one
	for (int i = 0; i < 4; i++){
		//testarry[i] = rand();
		testarry[i] = i+1;
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
	int testarry[4];
	arrpass(testarry);
	tstptr = arrpassB();
	printf("Second element: %d\n",testarry[1]);
	printf("This is the first element: %d\n", *(tstptr+1));
	printf("This is the second element: %d", *(tstptr + 4));//incorrect, need to fix
	return 0;

}