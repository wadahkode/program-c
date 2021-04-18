#include <stdio.h>

void main()
{
  int data[3] = {1, 2, 3};
  int length = sizeof(data) / sizeof(*data);

  for(int i=0; i < length; i++) {
    printf("index %d nilainya adalah %d\n", i, data[i]);
  }

}
