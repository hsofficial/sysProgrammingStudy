//2021-03-21 wait() 실습코드

#include<sys/wait.h>
#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main(){
	int pid;
	int child_pid;
	int status;
	int ret;

	pid = fork();

	switch(pid){
		case -1:
			perror("FORK FAIL\n");
			break;
		
		case 0:
			execl("/bin/ls", "ls", "-la", NULL);
			perror("EXECL FAIL\n");
			break;

		default:
			child_pid = wait(&status);

			printf("Parent PID >> %d , Child PID >> %d \n", getpid(), child_pid);
			
			if(WIFEXITED(status)){
				printf("Child proc is normally terminated.\n");
			}

			exit(0);
	}

}
