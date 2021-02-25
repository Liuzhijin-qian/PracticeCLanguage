#include  <stdio.h>
#include  <string.h>
#define   N   80
void fun(char  *s, int  n, char  *t)
{ int len,i,j=0;
  len=strlen(s);
/**********found**********/
  if(n>=len) strcpy(t,s);
  else {
/**********found**********/
     for(i=len-n; i<=len-1; i++)  t[j++]= s[i] ;
/**********found**********/
     t[j]= 0 ;
  }
}
void main()
{ char  s[N],t[N];    int  n;
  printf("Enter a string:  ");gets(s);
  printf( "Enter n:");  scanf("%d",&n);
  fun(s,n,t);
  printf("The string t :  ");  puts(t);
}

