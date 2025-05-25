#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int target = rand() % 100 + 1;
  int input;
  int count = 0;

  while (input != target) {
    printf("I'm thinking of a number between 1 and 100...\n");
    scanf("%d", &input);
    if (input < target) {
      printf("Guess too low!\n");
      count++;
    } else if (input > target) {
      printf("guess too high!\n");
      count++;
    } else {
      printf("You got it, nice! It only took you %d tries\n", count);
    }
  }
  return 0;
}
