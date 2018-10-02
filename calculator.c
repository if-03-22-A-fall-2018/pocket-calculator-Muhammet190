#include <stdio.h>

int menu(int);
void getoperands(double*,double*);
double performoperation(int,double,double);


int main(int argc, char const *argv[])
{
  do {
    double value = 0.0;
    int choose = 0;
    int input = 0;

    input = menu(choose);
    if (input == -1) {
      break;
    }


    double operand1 = 0;
    double operand2 = 0;
    getoperands(&operand1,&operand2);
    value = performoperation(input,operand1,operand2);
    printf("Ergebnis:%f\n",value);
  } while(1);

}

  int menu(int choose)
  {
    do {
      printf("Choose one of the following operations:\n");
      printf("Add (1)\n");
      printf("Subtract (2)\n");
      printf("Multiply (3)\n");
      printf("Divide (4)\n");
      printf("Stop program (-1)\n");
      printf("Enter your choice:\n");
      scanf("%d", &choose);
      if (choose >= 5 || choose <= -2) {
        printf("Input not allowed, please try again\n");
      }
    } while(choose >= 5 || choose <= -2);
      return choose;
  }

    void getoperands(double *operand1,double *operand2)
    {
      printf("Geben Sie nun die 1.Operande ein\n");
      scanf("%lf",operand1);
      printf("Geben Sie nun die 2.Operande ein\n");
      scanf("%lf",operand2);
    }
double performoperation(int input,double operand1,double operand2){
double result = 0;
switch (input)
{
  case 1:
  result = operand1 + operand2;
  break;

  case 2:
  result = operand1 - operand2;
  break;

  case 3:
  result = operand1 * operand2;
  break;

  case 4:
  if(operand1 == 0 || operand2 == 0){
    printf("Division by zero.\n");
  }else{
    result = operand1 / operand2;
  }
  break;

  default:
  break;
}
return result;
}
