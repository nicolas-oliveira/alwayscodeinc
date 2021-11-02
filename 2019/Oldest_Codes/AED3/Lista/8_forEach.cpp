#include <iostream>
#include <list>

using namespace std;

int main() {
  string vetor[] = { "Nicolas", "Bianca", "Fernando" };

  for(string i: vetor) {
    cout << i << endl;
  }

  return 0;
}