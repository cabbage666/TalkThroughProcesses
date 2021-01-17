#include <signal.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char **argv){
	pid_t pid;
	int sig;
	sig = atoi(argv[1]);
	pid = atoi(argv[2]);
	union sigval tt;

	sigqueue(pid,sig,tt);
	sleep(2);
}



