#include <iostream>
using namespace std;
int val [] = {5, 10, 20, 40, 80};
int r, sumofall=1;
int main ()
{
  for ( r=0 ; r<5 ; ++r )
  {
    sumofall += val[r];
  }
  cout << sumofall<<endl;
  system("pause")
 ; return 0;
}
