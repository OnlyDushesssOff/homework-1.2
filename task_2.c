#include <stdio.h>
#include <locale.h>
#include <math.h>


 int main(){
   setlocale(LC_ALL, "Russian");

   int a = 8, b = 6;
   printf("Первое число = %d\n", a);
   printf("Второе число = %d\n", b);
   printf("Среднее арифмет. квадратов = %.2lf\n", (pow(a, 2) + pow(b, 2)) / 2);
   printf("Среднее арифмет. модулей = %.2lf\n", (fabs(a) + fabs(b)) / 2);

    return 0;
 }