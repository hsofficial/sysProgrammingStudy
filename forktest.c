//2021-03-09 23강 fork() 실습파일

#include<stdio.h>
#include<unistd.h>		//fork() header
#include<sys/types.h>

int main(){
	pid_t pid;		//pid 변수선언
	printf("fork() system call 이전\n");

	pid = fork();		//system call

	if(pid == 0){		//child proc는 무조건 pid 0이 된다
		printf("\nchild process >>> pid : %d\n",  pid);
	}
	else if(pid > 0){	//parent proc의 pid값 return됨
		printf("\nparent process >> pid : %d\n",  pid);
	}
	else{			//실패시 -1 return
		printf("\nfork() FAILED!!!\n");
	}

	return 0;

}
