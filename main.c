/*
  UB C Programming Project
  Quiz Project
  Max Gombos
*/
#include <stdio.h>

int main(void) {
  int correctAnswers;
  float grade;
  correctAnswers = 0;
  char answer;
  
  printf("1: What continent is Canada in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n");
  scanf("%s", &answer);
  if (answer == 'a') {
    printf("You are correct!\n");
    correctAnswers += 1;
  }
  else {
    printf("You are incorrect, the correct answer was:\n\ta: North America\n");
  }
  printf("2: What continent is Belgium in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n");
  scanf("%s", &answer);
  if (answer == 'd') {
    printf("You are correct!\n");
    correctAnswers += 1;
  }
  else {
    printf("You are incorrect, the correct answer was:\n\td: Europe\n");
  }
  



  grade = correctAnswers/2;
  grade = grade * 100;
  printf("\nYou got %d out of 2 correct for a grade of %.02f%%", correctAnswers, grade);
  
  return 0;
}