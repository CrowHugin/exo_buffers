#include <stdio.h>

int main(void){
  int n=0, i,ind;

  char buffer[50];

  printf("Veuillez rentrer une phrase svp\n");
  fgets(buffer, sizeof(buffer),stdin);

  while(buffer[n] != '\n' && buffer[n] != '\0'){
       n++;
       }

  for (i=0;i<n;i++)
  {
    if (buffer[i] == ' ')
    {
      for (ind=i; ind<n; ind++)
      {
        buffer[ind]=buffer[ind+1];
      }
    }
  }
  printf("%s\n", buffer);


  return 0;
}
