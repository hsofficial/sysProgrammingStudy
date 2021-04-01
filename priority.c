//2021-03-12 priority() 실습코드

#include<sys/resource.h>
#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
	int which = PRIO_PROCESS;
	id_t pid;
	int ret;

	pid = getpid();
	ret = getpriority(which, 0);
	printf("pid = %d, priority = %d \n", pid, ret);

	ret = nice(10);
	ret = getpriority(which, 0);
	printf("pid = %d, priority = %d \n", pid, ret);

	ret = setpriority(which, 0, 5);
	ret = getpriority(which, 0);
	printf("pid = %d, priority = %d \n", pid, ret);

	return 0;
}

