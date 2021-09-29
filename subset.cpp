#include<iostream>
using namespace std;
int subset(int j, int arr[], int isum, int sum, int total)
{  
   if(j > 6)
      return total;
   else if((isum+arr[j]) == sum)
{      total+=1;

 cout<<isum+arr[j]<<"->"<<j<<endl;}
   subset(j+1,arr,isum,sum,total);
     
   subset(j+1,arr,isum+arr[j],sum,total);
  
}
int main()
{
 int arr[6]={5,10,15,20,25,30};
 int isum=0;
 int sum=50;//sum to calculate
 int total=0;
 int pl=0;
 for(int i=0; i < 6;i++)
 { isum=arr[i];
  pl+=subset(i+1,arr,isum,sum,total);
}
cout<<pl;

}
