#include "student.h"

void printStudent(struct Student student) {
  printf("Name %s:\n", student.name);
  printf("Number: %d\n", student.number);
  printf("Average grade:%f\n", student.averageGrade);
}