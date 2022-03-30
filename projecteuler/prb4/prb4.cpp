#include<iostream>
#include<cmath>
using namespace std;

bool isPalindrom(int n)
{
  
  int tmp = n;

  int val = 0;
  while(tmp != 0)
  {
      val *= 10;
      val += tmp%10;
      tmp /= 10;
  }

  if(n == val)
  {
      return true;
  }

  return false;
  



}


int main()
{
    int large = 0;

   for(int i = 999; i>=100; i--)
   {
       for(int j = 999; j>=100; j--)
       {

            int c = i*j;

            if(isPalindrom(c))
            {
                // cout<<c<<endl;
                // break;

                if (c > large)
                {
                    large = c;
                }
            }

       }

       
    

   }
   cout<<large;



    return 0;
}