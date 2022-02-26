#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <iterator>
#include <numeric>
#include <string>
using namespace std;


int main() {

vector<int> ints = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  auto iter = ints.begin();
  auto another = iter + 5;
  iter +=3;
  if ( iter < another ){
      cout << *iter;
  } else {
      cout << *another;
  }

 }