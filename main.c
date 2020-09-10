//Author: Kyle Chen kvc5823@psu.edu
//Collaborator: Shiquan Zhang spz5202@psu.edu
//Collaborator: Brian Truong bqt5199@psu.edu
//Collaborator: Adam Greenberg aqg5910@psu.edu
//Section: 10R
//Breakout Room 16
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  double Grade;
  char *input = readline("Enter your CMPSC 131 grade:");
  Grade = atof(input);
  if (Grade >= 93.0)
  {
    printf("Your letter grade for CMPSC 131 is A.\n");
  }
  else if (Grade >= 90.0)
  {
    printf("Your letter grade for CMPSC 131 is A-.\n");
  }
  else if (Grade >= 87.0)
  {
    printf("Your letter grade for CMPSC 131 is B+.\n");
  }
  else if (Grade >= 83.0)
  {
    printf("Your letter grade for CMPSC 131 is B.\n");
  }
  else if (Grade >= 80.0)
  {
    printf("Your letter grade for CMPSC 131 is B-.\n");
  }
  else if (Grade >= 77.0)
  {
    printf("Your letter grade for CMPSC 131 is C+.\n");
  }
  else if (Grade >= 70.0)
  {
    printf("Your letter grade for CMPSC 131 is C.\n");
  }
  else if (Grade >= 60.0)
  {
    printf("Your letter grade for CMPSC 131 is D.\n");
  }
  else 
  {
    printf("Your letter grade for CMPSC 131 is F.\n");
  }
  return 0;
}