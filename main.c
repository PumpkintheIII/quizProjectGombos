/*
  UB C Programming Project
  Quiz Project
  Max Gombos
*/
#include <stdio.h> //import input and output functions

int main(void) { //define main function
  int correctAnswers; //intialize varialbe as integer
  float grade; //intialize varialbe as float
  correctAnswers = 0; //update correctAnswers var
  char answer; //intialize varialbe as character

  //Question 1:
  printf("1: What continent is Canada in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts users answer
  if (answer == 'a') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnwers variable
  }
  else { //if answer incorrect 
    printf("You are incorrect, the correct answer was:\n\ta: North America\n"); //tell user correct answer
  }
  //Question 2:
  printf("2: What continent is Belgium in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'd') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\td: Europe\n"); //tell user correct answer
  }
  //Question 3:
  printf("3: What continent is the Democratic Republic of Congo in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'c') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tc: Africa\n"); //tell user correct answer
  }
  //Question 4:
  printf("4: What continent is Bosnia and Herzegovina in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'd') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\td: Europe\n"); //tell user correct answer
  }
  //Question 5:
  printf("5: What continent is Azerbaijan in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'e') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\te: Asia\n"); //tell user correct answer
  }
  //Question 6:
  printf("6: What continent is Fiji in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'f') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tf: Oceania\n"); //tell user correct answer
  }
  //Question 7:
  printf("7: What continent is Mexico in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'a') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\ta: North America\n"); //tell user correct answer
  }
  //Question 8:
  printf("8: What continent is the Federated States of Micronesia in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'f') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tf: Oceania\n"); //tell user correct answer
  }
  //Question 9:
  printf("9: What continent is Ethiopia in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'c') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tc: Africa\n"); //tell user correct answer
  }
  //Question 10:
  printf("10: What continent is San Marino in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'd') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\td: Europe\n"); //tell user correct answer
  }
  //Question 11:
  printf("11: What continent is Tonga in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'f') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tf: Oceania\n"); //tell user correct answer
  }
  //Question 12:
  printf("12: What continent is Serbia in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'd') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\td: Europe\n"); //tell user correct answer
  }
  //Question 13:
  printf("13: What continent is Nepal in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'e') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\te: Asia\n"); //tell user correct answer
  }
  //Question 14:
  printf("14: What continent is Peru in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'b') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tb: South America\n"); //tell user correct answer
  }
  //Question 15:
  printf("15: What continent is Sierra Leone in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'c') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tc: Africa\n"); //tell user correct answer
  }
  //Question 16:
  printf("16: What continent is Laos in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'e') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\te: Asia\n"); //tell user correct answer
  }
  //Question 17:
  printf("17: What continent is Australia in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'f') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tf: Oceania\n"); //tell user correct answer
  }
  //Question 18:
  printf("18: What continent is Lithuania in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'd') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\td: Europe\n"); //tell user correct answer
  }
  //Question 19:
  printf("19: What continent is the United States of America in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'a') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\ta: North America\n"); //tell user correct answer
  }
  //Question 20:
  printf("20: What continent is Bolivia in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'b') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tb: South America\n"); //tell user correct answer
  }
  //Question 21:
  printf("21: What continent is Greenland in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'a') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\ta: North America\n"); //tell user correct answer
  }
  //Question 22:
  printf("22: What continent is Chile in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'b') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tb: South America\n"); //tell user correct answer
  }
  //Question 23:
  printf("23: What continent is Sweden in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'd') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\td: Europe\n"); //tell user correct answer
  }
  //Question 24:
  printf("24: What continent is India in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'e') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\te: Asia\n"); //tell user correct answer
  }
  //Question 25:
  printf("25: What continent is Kiribati in?\na: North America\nb: South America\nc: Africa\nd: Europe\ne: Asia\nf: Oceania\n"); //question
  scanf("%s", &answer); //accepts user answer
  if (answer == 'f') { //if answer is correct:
    printf("You are correct!\n"); //output answer correct
    correctAnswers += 1; //increment correctAnswer variable
  }
  else { //if answer is incorrect:
    printf("You are incorrect, the correct answer was:\n\tf: Oceania\n"); //tell user correct answer
  }

  grade = correctAnswers/25; //find grade
  grade = grade * 100; //find grade
  printf("\nYou got %d out of 25 correct for a grade of %.02f%%", correctAnswers, grade); //output grade
  
  return 0;
}