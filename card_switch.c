/*
 * This the programm to evaluate the wight of card;
 * Published under the public Las-Vegas licence.
 * (c)2014 College black-jack team
 */

#include <stdio.h>
#include <stdlib.h>
int main()
{
  char card_name[3];
  puts("Enter the card name: ");
  scanf("%2s", card_name);
  int val = 0;
  switch(card_name[0]) {
  case 'K':
    val = 10;
    break;
  case 'Q':
    val = 10;
    break;
  case 'J':
    val = 10;
    break;
  case 'A':
    val = 11;
    break;
  default:
    val = atoi(card_name);
  }
  if ((val > 2) && (val < 7))
    puts("count increased");
  else if (val == 10)
    puts("count decreased");


  /* printf("The weight of casd is: %i\n", val); */
  return 0;
}
