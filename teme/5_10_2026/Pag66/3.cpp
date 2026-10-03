#include <cstring>
#include <iostream>
using namespace std;
int main() {
  char s[100], c;
  cin >> c;
  cin.ignore();
  cin.getline(s, 100);
  char *tokat = strtok(s, " ");
  int cuv =0;
  while (tokat != nullptr) {
    if(strchr(tokat, c)){
      cuv++;
      cout << tokat<< endl;
    }
    tokat = strtok(nullptr, " ");
  }
  cout << cuv << endl;
  return 0;
}
