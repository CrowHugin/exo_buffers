#include <stdio.h>

int main(void){
  int lenght = 10;
  char buffer[lenght];
  char temp;

  int i;

  printf("Veuillez rentrer un mot: \n");
  fgets(buffer,sizeof(buffer),stdin);

  int j;
  while(buffer[j] != '\n' && buffer[j] != '\0'){
    j++;
  }


  for (i=0;i<j;i++,j--)
  {
    temp = buffer[i];
    buffer[i] = buffer[j];
    buffer[j] = temp;
  }
  printf("%s\n",buffer);
  return 0;
}
