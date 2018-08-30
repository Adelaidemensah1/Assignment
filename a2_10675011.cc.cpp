#include <iostream>
using namespace std;
int main()
{int n, i;
bool isPrime = true;
//n is going to be our divisor
cout << "Enter a positive integer and press enter ";
cin>> n;
for(i=2; i<= n/2; ++i)
{
	if(n% i==0)
	{
		isPrime = false;
		break;
	}
}
if (isPrime)
cout<< "Is a prime number";
else
cout << "Is not a prime number";
return 0;
}
