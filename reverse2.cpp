#include <stdio.h>
int main()
{
   char str[50], rts[50];
   int start, end, count = 0;

   printf("Enter a string : ");
   gets(str);

   while (str[count] != '\0')
      count++;
      
   end = count - 1;

   for (start = 0; start < count; start++) {
      rts[start] = str[end];
      end--;
   }

   rts[start] = '\0';

   printf("Reverse string : %s", rts);

   return 0;
}
