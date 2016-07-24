# REVER#include<stdio.h>
int main() {
   char str[100], t;
   int i, j = 0;
   gets(str);
   i = 0;
   j = strlen(str) - 1;
    while (i < j) {
      t = str[i];
      str[i] = str[j];
      str[j] = t;
      i++;
      j--;
   }
 
   printf("\n%s", str);
   return (0);
}
