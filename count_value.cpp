/* count how many value are persent in the array between a and b    */
#include<iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int d[n],a,b,c=0,i;
  for(i=0;i<n;i++)
  {
    cin >> d[i];
  }
  cin >> a >> b;
  for(i=0;i<n;i++)
  {
    if(d[i] >= a && d[i]<=b)
    {
      c++;
    }
  }
  cout << c;
  }
