#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   ?? b;
   ?? c;
   ?? a;

   raptor_prompt_variable_zzyz ="enter A";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> a;
   raptor_prompt_variable_zzyz ="enter B";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> b;
   raptor_prompt_variable_zzyz ="enter C";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> c;
   if (a>b)
   {
      if (a>c)
      {
         cout << "big="+a << endl;      }
      else
      {
         cout << "big="+c << endl;      }
   }
   else
   {
      if (b>c)
      {
         cout << "big="+b << endl;      }
      else
      {
         cout << "big="+c << endl;      }
   }

   return 0;
}
