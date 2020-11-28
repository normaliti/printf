#include "libftprintf.h"

int digit_count (int a)
{
    int count;
  //  if(p->precision == 0 && a == 0)
      //  return (0);
    count = (a < 0) ? 2 : 1;
    while ((a = a/10))
        count+=1;
    return (count);
}