#include <vector>
#include <string>
#include <iostream>


using std::cout;
using std::endl;
using std::vector;
using std::string;

int main()
{
  vector<int> a{1,2,3,4,5,6};
  for (auto &c : a)
    c = c*c;
  for (auto c : a)
    {
      cout << c << endl;
    }
  return 0;
}
