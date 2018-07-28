#include <stdio.h>
/* Include other headers as needed */
int main()
{
  int i,j,num,low=2;
  int flag;
  scanf("%d",&num);

  while(low<=num)
  {
    flag = 0;

    for(i = 2;i <= low/2;++i)
    {
      if(low % i == 0)
      {
      flag = 1;
      break;
      }
    }

    if(flag == 0)
      printf("%d\n",low);
    ++low;
  }
}
