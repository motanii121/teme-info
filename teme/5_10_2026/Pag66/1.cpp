#include <cstring>
#include <iostream>
using namespace std;
int main() {
  char s[100];
  cin.get(s, 100);
  char *tokat = strtok(s, " ,.");
  int spa =0;
  while (tokat != nullptr) {
    spa++;
    tokat=strtok(nullptr, " ,.");
  }
  cout << spa << endl;
  return 0;
}
