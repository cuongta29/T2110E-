#include <stdio.h>

int main() {
   char s[] = "FPT aptech VN";
   int i = 0;
   int SoNguyenAm = 0;
   int SoPhuAm = 0;
   while(s[i++] != '\0') {
      if(s[i] =='a' || s[i] =='e' || s[i] =='i' || s[i] =='o' || s[i] =='u' )
         SoNguyenAm++;
      else
         SoPhuAm++;
   }
   printf("Chuoi '%s' co chua: %d nguyen am va %d phu am.", s, SoNguyenAm, SoPhuAm);
}
