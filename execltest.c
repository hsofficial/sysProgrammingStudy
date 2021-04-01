//2021-03-10 execl() 실습파일

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	printf("execute ls\n");
	execl("/bin/ls", "ls", "-la", NULL);
	//execl("전체 namespace", "인자1", "인자 2", NULL);
	
	perror("excel is failed!!\n");
	exit(1);
	//error 출력 후 code 전달
}
