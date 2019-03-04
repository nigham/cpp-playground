#include "my_lib.h"

#include <algorithm>
#include <iostream>

#include "absl/strings/str_cat.h"
#include "absl/strings/str_join.h"

using namespace std;

void SortVector(vector<int>* items) {
  std::sort(items->begin(), items->end());
}

// Prints the given vector.
string VecToString(const vector<int>& v) {
  return absl::StrCat("{", absl::StrJoin(v, ","), "}");
}

void Process() {
  vector<int> a = {20, 10, 45, 83, 5};
  cout << "When I sort, " << VecToString(a) << " becomes ";
  SortVector(&a);
  cout << VecToString(a) << "\n";
}
