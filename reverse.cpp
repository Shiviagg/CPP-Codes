/*program to reverse the array */
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n],i;
  for(i=0;i<n;i++)
  {
    cin >> a[i];
  }
  for(i=n-1;i>=0;i--)
  {
        cout << a[i]<< " ";
  }
}



