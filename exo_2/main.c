#include <stdio.h>

int main(void){
  int n=0, i, j=0;

  char buffer[50];

  printf("Veuillez rentrer une phrase svp\n");
  fgets(buffer, sizeof(buffer),stdin);

  while(buffer[n] != '\n' && buffer[n] != '\0')
    {
      n++;
    }

  for(i=0;i<n;i++)
  {

    if(buffer[i] != ' ' && buffer[i] != '\n')
    {
      buffer[j] = buffer[i];
      j++;
    }
  }

  buffer[j] = '\0';
  printf("%s\n", buffer);


  return 0;
}
