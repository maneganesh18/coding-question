#include <iostream>
#include <cmath>
using namespace std;

int returnVal(char x)
{
    return (int)x - 87;
}

bool isPerfectSquare(int x)
{
    int s = sqrt(x);
    return (s*s == x);
}
 
// Returns true if n is a Fibinacci Number, else false
bool isFibonacci(int n)
{
    // n is Fibinacci if one of 5*n*n + 4 or 5*n*n - 4 or both
    // is a perferct square
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}

int main()
{	int sum=0;
    string s = "HELP";
    for (unsigned int i = 0; i < s.length(); i++)
    {
    	 cout<<sum<<endl;
        sum -=returnVal(s[i]);
    }
   
    
     isFibonacci(sum)? cout <<sum << " is a Fibonacci Number \n":
                     cout << sum<< " is a not Fibonacci Number \n" ;
  return 0;
    return 0;
}
