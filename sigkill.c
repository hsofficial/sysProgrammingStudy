//2021-03-29 시그널 예제코드 2

#include<sys/types.h>
#include<signal.h>
#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv){
	int pid, res;
	int sig_num;

	if(argc != 3){
		printf("usage %s [pid] [signum]\n", argv[0]);
		exit(1);
	}

	pid = atoi(argv[1]);
	sig_num = atoi(argv[2]);
	res = kill(pid, sig_num);

	if(res < 0){
		perror("to send signal is failed\n");
		exit(1);
	}

	return 0;

}
