/*
2/6/21
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input
  The only input line contains a string of n characters.
Output
  Print one integer: the length of the longest repetition.

Constraints
  1≤n≤106

Example
  Input:
  ATTCGGGA

  Output:
  3
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
  string line;
  int longest_repetion = 1;
  int temp_num_repetitions = 1;
  char repetition;
  char prevRepetition;
  bool flag = false;

  getline(cin, line);
  prevRepetition = line[0];

  for (int i=1; i<line.length(); i++) {
    repetition = line[i];
    if (repetition==prevRepetition) {
      if (flag) {
        temp_num_repetitions++;
      }
      else {
        temp_num_repetitions = 2;
      }
      flag = true;
    }
    else {
      flag = false;
      if (temp_num_repetitions>longest_repetion) {
        longest_repetion = temp_num_repetitions;
      }
    }
    prevRepetition = repetition;

  }
  if (temp_num_repetitions>longest_repetion) {
        longest_repetion = temp_num_repetitions;
      }
  cout << longest_repetion;
  return 0;
}
