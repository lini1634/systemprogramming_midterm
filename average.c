#include <stdio.h>
  
int main(void)
{
	int system, algorithm, network;
        double average; // change data type, int to double
	

	printf("Input the system programming, algortihm, and network score:");
	scanf("%d%d%d", &system, &algorithm, &network);

	average = float((system + algorithm + network) / 3); // add bracket

	printf("The average of the three subjects is %.2f.\n", average); 
	//change output data type to printed into two decimal places.

	return 0;

}
