/* find the position of key element in the array */

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
 int key, flag=0;
 cin >>  key;
 for(i=0;i<n;i++)
 {
   if(a[i]==key)
    {
      cout << i << endl;
      flag=1;
      break;
    }
 }
 if(flag==0)
      cout << "-1" <<endl;
}
