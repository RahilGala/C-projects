
#include <stdio.h>
#include <math.h>


long long convert(int);

int main() {
    
  int n,bin;
  
  printf("Enter a decimal number: ");
  scanf("%d", &n);
  
  bin = convert(n);
  
  printf("%d in decimal =  %d in octal", n, bin);

  return 0;
}

long long convert(int n) {

  int bin = 0;

  int rem, i = 1;
  while (n != 0) {
    
    rem = n % 8;
    
    n /= 8;
    
    bin += rem * i;
    
    i *= 10;
  }

  return bin;
}