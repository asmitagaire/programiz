#include <stdio.h>

int main()
{
  double sum = 0; 
  int num = 0;

  char name[30];

  char* subjects[5] = {"math", "sci", "nepali", "comp","eng"};
  // double marks[5];

  printf("Enter student name: ");
  scanf("%s", name);

  printf("Enter a grade: ");
  scanf("%d", &num);
 
  for(int a = 0; a < 5; a++)
  {
    printf("enter mark for %s: ", subjects[a]);
    double temp = 0;
    scanf("%lf", &temp);
    sum += temp;
  }

  // for(int a = 0; a < 5; a++)
  // {
  //   sum += marks[a];
  // }
 
  printf("Total= %.2lf\n", sum);

  double per = sum / 5.0;
  printf("percentage = %.3lf\n", per);
    
  return 0;
}