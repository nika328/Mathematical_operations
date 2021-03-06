#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int arithmeticMean (int a, int b, int c)
  {
    return (a+b+c)/3;
  }

double geometricMean(int a, int b, int c)
  {
    if((a*b*c) > 0) 
     {
       return pow(a*b*c, 1.0/3);
     }
     else 
     {
       return -pow(abs(a*b*c), 1.0/3);
     }
  }

int median (int a, int b, int c)
{
  if ((a>=b && a<=c) || (a<=b && a>=c))
    {
      return a;
    }
  else if ((b>=a && b<=c) || (b<=a && b>=c))
    {
      return b;
    }
  else 
    {
      return c;
    }
}



int main(void) {
  int num1, num2, num3;
  printf("Enter 3 numbers: ");
  scanf("%d %d %d",&num1, &num2, &num3 );
  printf("\n");
  printf("Arithmetic mean is %d.\n", arithmeticMean(num1, num2, num3));
  printf("Geometric mean is %f.\n", geometricMean(num1, num2, num3));
  printf("The median is %d.\n", median(num1, num2, num3));
  return 0;
}
