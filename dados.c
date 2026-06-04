#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sum2 = 0, sum3 = 0, sum4 = 0, sum5 = 0, sum6 = 0, sum7 = 0, sum8 = 0, sum9 = 0, sum10 = 0, sum11 = 0, sum12 = 0;
  srand(time(NULL));
  for (int i = 0; i < 60; i++){
  int dice1 = (rand() % 6) + 1;
  int dice2 = (rand() % 6) + 1;
  printf("You rolled %d and %d (total = %d)\n", dice1, dice2, dice1 + dice2);
    switch (dice1 + dice2) {
        case 2:
        sum2++;
        break;
        case 3:
        sum3++;
        break;
        case 4:
        sum4++;
        break;
        case 5:
        sum5++;
        break;
        case 6:
        sum6++;
        break;
        case 7:
        sum7++;
        break;
        case 8:
        sum8++;
        break;
        case 9:
        sum9++;
        break;
        case 10:
        sum10++;
        break;
        case 11:
        sum11++;
        break;
        case 12:
        sum12++;
        break;
    }
}
    printf("Sum of 2: %d\n", sum2);
    printf("Sum of 3: %d\n", sum3);
    printf("Sum of 4: %d\n", sum4);
    printf("Sum of 5: %d\n", sum5);
    printf("Sum of 6: %d\n", sum6);
    printf("Sum of 7: %d\n", sum7);
    printf("Sum of 8: %d\n", sum8);
    printf("Sum of 9: %d\n", sum9);
    printf("Sum of 10: %d\n", sum10);
    printf("Sum of 11: %d\n", sum11);
    printf("Sum of 12: %d\n", sum12);
  return 0;
}