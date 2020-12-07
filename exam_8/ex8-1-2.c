 #include <stdio.h>
 #include <string.h>
 int main()
 {
     char m,str[30];
     int i,j;
     gets(str);
     for (i = 0,j=strlen(str)-1; i < j; i++,j--)
     {
         m=str[i];
         str[i]=str[j];
         str[j]=m;
     }
     puts(str);


     return 0;
 }