#include <stdio.h>

int main() 
{
  int i,c=1;
  char a[100];
  scanf("%s",a);
  for(i=0;a[i]!=NULL;i++)
  {
    if(a[i]=='(')
    {
      c++;
    }
    else if(a[i]==')')
    {
      c--;
    }
  }
    if(c==1)
    {
      printf("yes");
    }
    else
    {
      printf("no");
    }
  return 0;
}
