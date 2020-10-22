#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void){
	// fork
	pid_t pid;
	pid = fork();

	switch(pid){
		case -1://fork error
			perror("fork() failed.\n");
			break;
		case 0://child process, execution ls 
			printf("execl() function execution\n");
			execl("/bin/ls","ls","-l",(char *)0);
			perror("execl() failed\n");
			break;
		default:// default , exit
			wait((int *)0);
			exit(0);
	}
	return(0);
}
