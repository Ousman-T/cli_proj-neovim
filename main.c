#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  srand(time(NULL));
  int target = rand() % 100 + 1;
  int input;
  int count = 0;

  printf("I'm thinking of a number from 1-100\n");
  scanf("%d", &input);
  while (input != target) {
    if (input < target) {
      printf("Guess too low!\n");
      count++;
      break;
    } else if (input > target) {
      printf("guess too high!\n");
      count++;
      break;
    } else {
      printf("You got it, nice! It only took you %d tries\n");
      break;
    }
  }
  return 0;
}
