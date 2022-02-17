#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char* argv[]){
	int arr[7];
	for(int i = 0; i < 7; i++){
		arr[i] = 0;
	}
	countp(arr);
	printf(1, "Forked processes:    %d\n", arr[0]);
	printf(1, "RUNNABLE processes:  %d\n", arr[1]);
	printf(1, "SLEEPING processes:  %d\n", arr[2]);
	printf(1, "ZOMBIE processes:    %d\n", arr[3]);
	printf(1, "Scheduler called     %d times\n", arr[4]);
	printf(1, "Keyboard interrupts: %d\n", arr[5]);
	printf(1, "Total traps:         %d\n", arr[6]);
	exit();
}

