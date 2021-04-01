#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	char *envp[] = {"USER=dlwlrma", NULL};
	char *arg[] = {"ls", "-la", NULL};

	printf("execute ls -la\n");
	execve("/bin/ls", arg, envp);

	perror("excel is failed!!!\n");
	exit(1);
}
