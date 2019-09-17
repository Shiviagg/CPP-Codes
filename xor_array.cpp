/* find xor of two binary array. */
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n],b[n],i,j,d=0;
  for(i=0;i<n;i++)
  {
    cin >> a[i];
  }
   for(j=0;j<n;j++)
  {
    cin >> b[j];
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
            d=a[i]^b[j];
            break;
      }
   cout << d <<  " ";
  }


}






