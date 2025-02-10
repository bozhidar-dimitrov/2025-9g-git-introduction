#include <stdio.h>
#include "student.h"
#include <string.h>

int main(void) {

  printf("!Hello, World!\n");
  printf("This is remotely added line\n");

  // struct Student student = {
  //   .name = "Ivan", 
  //   .number = 16, 
  //   .averageGrade = 5.5
  // };

  struct Student student;
  student.number = 16;
  student.averageGrade = 5.5;
  strcpy(student.name, "Ivan");

  printStudent(student);

  printf("Adding another line of code \n");

  return 0;
}
