#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<string> names(n);

  for (int i = 0; i < n; i++)
  {
    cin >> names[i];
  }

  for (auto name : names)
  {
    cout << "Hello, " << name << "!" << endl;
  }
}
