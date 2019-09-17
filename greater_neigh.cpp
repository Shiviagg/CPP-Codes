/* find the element of array which are  greater than its neigbours  */

#include<iostream>
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
  for(i=1;i<n-1;i++)
  {
    if(a[i] > a[i+1] && a[i]>a[i-1])
       cout << a[i] << endl;
  }
}
