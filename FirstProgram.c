// Write a function that takes in an integer n as an argument and returns
// 1 if that number is even and 0 if odd.

#include <stdio.h>

int jonket(int n);

// Write function below
int joncket(int n){
  printf("This is wot u entered: %i\n", n);
  if(n == 100)
  {
    printf("ONE HUNDO ONE HUNDO\n");
  }
  // If n is even
  if(n % 2 == 0)
  {
  printf("Number is even- nina is warm\n");
  printf("------------------------------\n");
  return 1;  
  }
  else 
  {
  printf("Number is odd, and nina is c h i l l y\n");
  printf("------------------------------\n");
  return 0;
  }
}  

int main(void) {
    printf("right then, wots all this?!\n");
    joncket(100);
  joncket(84);
  joncket(73);
    return 0;
  
}

  