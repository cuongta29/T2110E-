#include <stdio.h>
#include <string.h>
int main (void) {
   char string[] = "tavietcuong";
   char temp;
   int i, j;
   int n = strlen(string);
   printf("Chuoi truoc khi sap xep: %s \n", string);
   for (i = 0; i < n-1; i++) {
      for (j = i+1; j < n; j++) {
         if (string[i] > string[j]) {
            temp = string[i];
            string[i] = string[j];
            string[j] = temp;
         }
      }
   }
   printf("Chuoi sau khi sap xep %s \n", string);
}
