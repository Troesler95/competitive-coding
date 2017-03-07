#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

// lightweight pair structure
// used to store input values together in a vector
namespace Smokes {
  struct Pair {
    unsigned int a, b;
    // constructor to set the tuple values
    Pair(unsigned int x, unsigned int y):a(x), b(y) {};

    private:
      // prevent use of default constructor
      Pair(){};
  };
}

int main(void) {
  unsigned int n=0, k=0;
  std::vector<Smokes::Pair> inputs;

  while(cin >> n >> k)
    inputs.push_back(Smokes::Pair(n,k));

  for(auto &it: inputs)
    cout << round(it.a+(it.a/it.b)+(ceil(it.a/it.b)/it.b)) << endl;

  return 0;
}
