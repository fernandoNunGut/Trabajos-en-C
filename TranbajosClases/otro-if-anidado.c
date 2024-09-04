#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
  float a=3,b;
  b=pow(a,2);

  if (b > a)
  {
    if (a == 2) printf("statement1");
    else printf("statement2");
  } else 
  {
    if (a == b) printf("statement3");
    else printf("statement4");
    
  }
  
}