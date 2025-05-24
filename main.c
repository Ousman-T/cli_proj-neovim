#include <math.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void main(void) {
	srand(time(NULL));
	int target = rand() % 100 + 1;
	int input;

	printf("I'm thinking of a number from 1-100\n");
	scanf("%d", input);
}
