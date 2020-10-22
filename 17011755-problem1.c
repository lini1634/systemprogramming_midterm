#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

int main(void)
{
	pid_t pid;

	if((pid = fork())<0) //fork error
		perror("error in fork()\n");
	
	else if(pid ==0)//child process
		printf("Child PID is %d, Parent PID is %d.\n",getpid(),getppid());

	else{ //parent process
		sleep(2);
		printf("Parent PID is %d\n",getpid());
	}
	exit(EXIT_SUCCESS);
}
