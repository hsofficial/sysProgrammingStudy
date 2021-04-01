//2021-03-29 시그널 예제코드

#include<signal.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

static void signal_handler(int signo){
	printf("catch sigint but no stop\n");
}

int main(void){
	if(signal (SIGINT, signal_handler) == SIG_ERR) {
		printf("can't catch sigint\n");
	}

	for(;;){
		pause();
	}

	return 0;
}

