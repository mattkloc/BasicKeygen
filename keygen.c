/*
  Program:            keygen
  Description:        generates an alphanumeric key of 25 characters
                      
  References:         none
  Author:             Matt Kloc
  License:            GPL License
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char *argv[])
{
  /* variables */
  const int key_len = 25;
  int key_count = 1;

  char alphanum_arr[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";

  int h, i;
  int randnum;

  if (argc > 2) {
    printf("\nError: Improper use of Key Generator.\n\n");
    return 1;
  }

  if (argc == 2) {
    key_count = atoi(argv[1]);
  }

  /* seed rand based on the current time */
  srand(time(NULL));

  /*  the amount of keys */
  for (h = 0; h < key_count; h++) {
    /* generate a single key */
    for (i = 0; i < key_len; i++) {
      randnum = rand() % 36;
      printf("%c", alphanum_arr[randnum]);
    }
    printf("\n");
  }

  return 0;
  
}
