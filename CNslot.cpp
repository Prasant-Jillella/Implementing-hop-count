#include<iostream>
using namespace std;
int main()
{
  int i,j,k=0,n,a[100][100],b[100][100],count=0,mem=0;
  cout<<"Enter the number of nodes:\n";
  cin>>n;
  int no[n];
  cout<<"Enter the hops b/w nodes like 1,2 and 3 for more than three hops:";
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
       cout<<"\nEnter the hops b/w "<<i+1<<"and"<<j+1;
       cin>>a[i][j];
       b[i][j]=0;     
  }
  for(i=0;i<n;i++)
  {
        for(j=0;j<n;j++)
       {
           if(a[i][j]==3&&b[j][i]!=1)
           {
                b[i][j]=1;
                count++;
                no[k]=i;
                k++;
           }
       }
  }      
  int l=0;
  for(i=no[l];l<count;l++)
  {
        for(j=no[l+1];j<count;j++)
        {
            if(a[i][j]!=3)
            {
                k--;
                }
            }
   }
   cout<<"number of slots ="<<(n-k+1);
   cin>>i;
}
