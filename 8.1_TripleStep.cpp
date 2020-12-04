#include <vector>
#include <iostream>

using namespace std;

int countWays(int n , vector<int> & v)
{
   if (n==0)
   {
      return 1;
   }
    if (v[n] == 0)
    {
        v[n] = countWays(n-1, v) + countWays(n-2, v) + countWays(n-3, v);
    }
    return v[n];
}
int countWays(int n)
{
    if (n ==0  || n == 1) return 1;
    vector<int> v(n+1, 0);	// vector to store possible step sizes
    v[0] = 1;
    v[1] = 1;
    v[2] = 2;
    v[3] = 3;
    return countWays(n, v);
}
int main(int argc, char const *argv[])
{			
   int noOfWays = countWays(6);
   cout<<noOfWays<< endl;	// Total number of stairs = 6
   return 0;
}
