
#include <iostream>
#include <string>
using namespace std;

int main(void) {
  int digits[10] = {0};
  int seqs[20] = {0};
  int len = 0, its = 0;
  string cont;

  cin >> its;
  for(int i = 0; i < its; ++i)
    cin >> seqs[i];

  for (int &in: seqs) {
    if(in == 0){break;}

    for(int i = 1; i <= in; i++)
      cont += to_string(i);

    for(char c: cont)
      digits[c-48]+=1;

    for(int j=0; j < 9; j++) {
      cout << digits[j] << ' ';
      digits[j]=0;
    }
    cout << digits[9] << endl;
    digits[9]=0;
    cont.clear();

    --its;
  }

  return 0;
}
