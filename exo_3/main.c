#include <stdio.h>

int main(void){
  char buffer[50];
  int i,j = 0,n=0;

  printf("Veuillez rentrer une phrase:\n");
  fgets(buffer,sizeof(buffer),stdin);

  while (buffer[n] != '\0' && buffer[n] != '\n')
    {
      n++;
    }

  //printf("%d\n",n);
  
  for (i=0;i<n;i++)
  {
    if (buffer[i] != buffer[i+1])
    {
      buffer[j] = buffer[i];
      j++;
    }
  }
  buffer[j] = '\0';

  printf("buffer: %s\n", buffer);




  return 0;
}
