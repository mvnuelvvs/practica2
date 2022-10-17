#include <stdio.h>

int main()
{

float num1, num2;

printf("Ingrese dos numeros: \n");
scanf("%f %f",&num1, &num2);

    if (num1==num2)
    printf("%.2f \n",num1*num2);

    else if (num1>num2)
    printf("%.2f \n", num1+num2);

    else //if (num1<num2)
    printf("%.2f \n", num1-num2);
    

return 0;
}