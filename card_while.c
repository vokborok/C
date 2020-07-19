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
  int count = 0;
  while (card_name[0] != 'X') {
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
    case 'X':
      puts("Exit the program");
      continue;
    default:
      val = atoi(card_name);
      if ((val < 1) || (val > 11)) {
        puts("you fucked up");
        continue;
      }
    }
    if ((val > 2) && (val < 7)) {
      puts("count increased");
      count++;
    } else if (val == 10){
      puts("count decreased");
      count--;
    }
    printf("curent count is %i\n", count);
  }
  return 0;
}
