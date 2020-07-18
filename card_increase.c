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
  if (card_name[0] == 'K') {
    val = 10;
  } else if (card_name[0] == 'Q') {
    val = 10;
  } else if (card_name[0] == 'J') {
    val = 10;
  } else if (card_name[0] == 'A') {
    val = 11;
  } else {
    val = atoi(card_name);
  }
  /* checking if value between 3 and 6 */
  if ((card_name[0]>=3) && (card_name[0]<=6))
    puts("count increased");
  else if ((card_name[0] == 'J') || (card_name[0] == 'Q') || (card_name[0] == 'K') || (card_name[0] == '1'))
    puts("count decreased");


  /* printf("The weight of casd is: %i\n", val); */
  return 0;
}
