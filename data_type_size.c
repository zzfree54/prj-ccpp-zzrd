
/**************************************************************************************
//File Name:
//		data_type_size.c
//
//Description:
//		printf the count of char short int long float double in bytes
//
//Author Date:
//		zz @home
//		@2015-1-14 19:13:18
//
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//zz// #include <unistd.h>

/*************************************************************************************
//Function Name:
//		main()
//Description:
//		the main function
//
//In Out:
//
//Return:
//
//Author Date:
//		zz @home
//		@2015-1-14 19:13:15
//
*/
int main(int argc, char* argv[])
{
	printf("data_type_size!\n");

	printf("char size is %d\n",sizeof(char));
	printf("short size is %d\n",sizeof(short));
	printf("int size is %d\n",sizeof(int));
	printf("long size is %d\n",sizeof(long));
	printf("float size is %d\n",sizeof(float));
	printf("double size is %d\n",sizeof(double));

	return 0;
}