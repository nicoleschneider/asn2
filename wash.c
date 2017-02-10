// This is my code
// Nicole Schneider
// cs366

#include <stdio.h>
#include <stdlib.h>
#include <error.h>

#include <sys/stat.h>

#include <utime.h>

#define MAXLEN 100

int main ()
{
  char buf[MAXLEN];

  const char* filename = "test.txt";

  FILE *fin = fopen(filename, "r");
  if (fin == NULL)
  {
    perror("fopen");
    exit(-1);
  }

  while (!feof(fin))
  {
    if (fgets(buf, MAXLEN, fin) == NULL)
"wash.c" 107L, 1657C      break;
   printf("%s", buf);
  }

  fseek(fin, 0, SEEK_SET);
  fgets(buf, 4, fin);
  printf("``%s''\n", buf);
  fseek(fin, -2, SEEK_CUR);
  fgets(buf, 4, fin);
  printf("``%s''\n", buf);



  char command;
  printf("\nFile: %s Command: ", filename);
  scanf("%c", &command);

  char commandArr[11] = {'c','d','r','u','t','a','l','m','x','n','q'};

  int i;
  for(i = 0; i < 11; i++)
  {
    if(commandArr[i] == command)
      printf("YIPEEE we got a match with %c\n", command);
  }

  if(command == 'c')
  {
    printf("\nYAY IT WAS A C\n");
  }
  else if(command == 'd')
  {
  }
  else if(command == 'r')
  {
  }
  else if(command == 'u')
  {
  }
  else if(command == 't')
  {
  }
  else if(command == 'a')
  {
  }
  else if(command == 'l')
  {
  }
  else if(command == 'm')
  {
  // change file's access permissions
  int mode;
  printf("Please enter integer for mode (like 0777, 0755, etc.): ");
  scanf("%i", &mode);
  chmod(filename, mode);
  }
  else if(command == 'x')
  {
  // chane file's access time to current time
    utime(filename, NULL);
  }
  else if(command == 'n')
  {
  }
  else if(command == 'q')
  {
  }
  else
  {
  }
  // chane file's access time to current time
  utime(filename, NULL);

  fclose(fin);

  return 0;
}

                                                                                            60,1          38%
