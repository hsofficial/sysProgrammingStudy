#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
	printf("pid = %d\n",getpid());
	printf("ppid = %d\n",getppid());
	return 0;
}

//2021-03-09 시스템프로그래밍 21-22강 예제코드

