#include <stdio.h>
 
#define MAX_SIZE 12
 
#define READ_INT(_x)					\
  {							\
    int _tmp = 0;					\
    register int _ch = getchar_unlocked();		\
    while (_ch < 48 || _ch > 57)			\
      _ch = getchar_unlocked();				\
    while (48 <= _ch && _ch <= 57)			\
      {							\
	_tmp = (_tmp << 3) + (_tmp << 1) + _ch - 48;	\
	_ch = getchar_unlocked();			\
      }							\
    (_x) = _tmp;					\
  }							\
 
 
int main(void)
{
  char str[MAX_SIZE];
  int i, j, t;
 
  READ_INT(t);
  while (t--)
    {
      while ((i = getchar_unlocked()) < 32)
	;
 
      for (*str = i, i = 1; (*(str + i++) = getchar_unlocked()) >= 32; )
	;
 
      while ((i = getchar_unlocked()) < 32)
	;
 
      for (j = 0; i >= 32; i = getchar_unlocked(), j++)
	if (i != '?' && *(str + j) != '?' && i != *(str + j))
	  break;
 
      if (i >= 32)
	{
	  while (getchar_unlocked() >= 32)
	    ;
	  
	  fputs_unlocked("No\n", stdout);
	}
      else
	fputs_unlocked("Yes\n", stdout);
    }
 
  return 0;
}
