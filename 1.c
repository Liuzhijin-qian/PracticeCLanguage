#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void WriteText(FILE *);
void ReadText(FILE *);
void main()
{  FILE  *fp;
   if((fp=fopen("myfile4.txt","w"))==NULL)
   {  printf(" open fail!!\n"); exit(0);}
   WriteText(fp);
   fclose(fp);
   if((fp=fopen("myfile4.txt","r"))==NULL)
   {  printf(" open fail!!\n"); exit(0);}
   ReadText(fp);
   fclose(fp);
}
/**********found**********/
void WriteText(FILE  *fw)
{  char  str[81];
   printf("\nEnter string with -1 to end :\n");
   gets(str);
   while(strcmp(str,"-1")!=0) {
/**********found**********/
      fputs(str,fw);  fputs("\n",fw);
      gets(str);
   }
}
void ReadText(FILE  *fr)
{  char  str[81];
   printf("\nRead file and output to screen :\n");
   fgets(str,81,fr);
   while( !feof(fr) ) {
/**********found**********/
     printf("%s",str);
     fgets(str,81,fr);
   }
}

