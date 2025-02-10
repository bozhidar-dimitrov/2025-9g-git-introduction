#ifndef STUDENT_H_
#define STUDENT_H_

struct Student {
  int number;
  float averageGrade;
  char name[26];
};

void printStudent(struct Student student);

#endif
