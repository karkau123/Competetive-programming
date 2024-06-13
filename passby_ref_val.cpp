// pass by valuue and pass by  reference explain

#include <iostream>
using namespace std;
void  fun (string &s)
{
   s = "cd";
}
int main()
{
   string s =  "ab";
   fun (s);
   cout << s << endl;

return 0 ;
}
