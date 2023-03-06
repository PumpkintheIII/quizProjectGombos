/*
  UB C Programming Project
  Quiz Project
  Max Gombos
*/
#include <stdio.h>

int main(void) {
  int correctAnswers;
  correctAnswers = 0;
  char answer;
  
  printf("What continent is Canada in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n");
  scanf("%c", &answer);
  if (answer == 'a') {
    printf("You are correct!\n");
    correctAnswers += 1;
  }
  else {
    printf("You are incorrect, the correct answer was:\n\ta: North America\n");
  }
  return 0;
}