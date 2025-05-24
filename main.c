#include <math.h>
#include <stdio.h>
#include <time.h>
#include <__clang_cuda_libdevice_declares.h>

main() {
	int ranNum = srand(time(NULL));
	int target = rand() % 100 + 1;
	int input;

	printf("I'm thinking of a number from 1-100\n");
	scanf("%d", input);
}
