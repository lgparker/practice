/* Elementary 3: Greet Alice or Bob, but no one else
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

  // Longest name in recorded history is 747 chars
  char name[747];

  // Get user input and format to handle letter casing
  printf("What is your name?\nEnter name: ");
  fgets(name, sizeof(name), stdin);
  name[strcspn(name, "\n\r")] = 0;
  for (int i=0; name[i]; i++) {
    name[i] = tolower(name[i]);
  }

  // Print message to stdout
  if (strcmp(name, "alice") == 0 || strcmp(name, "bob") == 0) {
    name[0] = toupper(name[0]);
    printf("Hello %s!\n", name);
  }
  else {
    printf("You're not Alice... nor Bob!\n");
  }

  return 0;
}

