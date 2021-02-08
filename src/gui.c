#include <stdio.h>
#include "tokenizer.h"

void main()
{
  printf("> ");
  char input = 0;
  while(input != EOF)
    {
      input = getchar();
      printf("%c",input);
    }
}
