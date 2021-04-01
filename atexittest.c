//2021-03-11 atexit 실습코드

#include<stdio.h>
#include<stdlib.h>

int main(void){
	void exitHandle(void);
	void goodbyeMsg(void);
	int ret;

	ret = atexit(exitHandle);
	if (ret != 0){
		perror("ERROR IN atexit\n");
	}

	
	ret = atexit(goodbyeMsg);
	if (ret != 0){
		perror("ERROR IN atexit\n");
	}

	exit(EXIT_SUCCESS);
}

void exitHandle(void){
	printf("exit handling\n");
}

void goodbyeMsg(void){
	printf("Byebye\n");
}

	
