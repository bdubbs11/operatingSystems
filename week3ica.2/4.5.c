#include <stdio.h>
#include <stdlib.h>

int main(){

  int numStudents;
  int* scores;
  
  printf("How many students are there?");
  scanf("%d",&numStudents);

  scores = (int *)malloc(numStudents * sizeof(int));

  printf("Enter the scores of the students (out of 100):\n");
  for (int i = i; i < numStudents + 1; i++){
    printf("Student %d: ", i);
    scanf("%d", &scores[i]);
  }

  FILE* filePointer;
  filePointer = fopen("grades.txt", "w");
  for(int i = numStudents; i > 0; i--){
    fprintf(filePointer, "Student %d: %d\n", i, scores[i]);
  }

  fclose(filePointer);
  free(scores);

  return 0;

} 
