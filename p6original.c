#include<stdio.h>
#include<string.h>

void input_two_string(char *a,char *b)
{
  printf("Enter First String:");
  scanf("%s",a);
  printf("Enter second string:");
  scanf("%s",b);
  }
  int strcp(char *a,char *b)
  {
    int value=strcmp(a,b);
    return value;
  }
  void output(char *a,char *b,int result)
  {
    if(result==0)
    {
      printf("strings are same size");
    }
    else if(result<0)
    {
      printf("%s is smaller than %s \n",a,b);
      printf("%s is Bigger than %s \n",b,a);
    }
  else if (result>0) 
   {
     printf("%s is Bigger than %s \n",a,b);
     printf("%s is Smaller than %s \n",b,a);
   }
  
  }
  int main()
  {
    int result;
    char a[30],b[30];
    input_two_string(a,b);
    result=strcp(a,b);
    output(a,b,result);
    return 0;
  }

 
