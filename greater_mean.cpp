/* find the no of element which are greater than mean of the array */
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n],i,sum=0,c=0;
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    sum=sum/n;
    for(i=0;i<n;i++)
    {
        if(a[i]>sum)
            c++;
    }
    cout << c << " ";
  }
