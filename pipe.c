//2021-03-11 pipe 실습코드

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MSGSIZE 255

char* msg = "hello child proc";

int main(){
	char buf[255];
	int fd[2], pid, nbytes;

	//pipe(fd)로 파이프 생성
	if(pipe(fd) < 0){
		exit(1);
	}

	//fork 실행 다음부터 child/parent proc 분리
	pid = fork();

	//parent proc에는 child proc pid값 들어감
	if (pid > 0){
		printf("parent PID >>> %d, child PID >>> %d\n", getpid(), pid);
		write(fd[1], msg, MSGSIZE);	//fd[1]에 기록
		exit(0);
	}

	//child proc에는 pid = 0
	else{
		printf("child PID >>> %d\n", getpid());
		nbytes = read(fd[0], buf, MSGSIZE);	//fd[0]으로 읽음
		printf("%d %s\n", nbytes, buf);
		exit(0);
	}

	return 0;

}
