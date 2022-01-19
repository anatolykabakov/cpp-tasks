/*
Task 13: Write the program, the argument of function is char array with text.
Result of function returns length of most longest word in text, 
containing in text.
*/
#include <iostream>

unsigned get_longest_word_size(char * text) {
  unsigned word_size = 0;
  unsigned max_word_size = 0;
  for (int i=0; text[i]; i++) {
    if (text[i] == ' ') {
      if (word_size > max_word_size) {
        max_word_size = word_size;
      }
      word_size = 0;
      continue;
    } 
    std::cout << text[i] << " ";
    word_size++;
  }
  
  return max_word_size;
}

int main() {
  char text[] = "Result of function returns length of most longest word in text, containing in text";
  std::cout << get_longest_word_size(text) << std::endl;
  return EXIT_SUCCESS;
}