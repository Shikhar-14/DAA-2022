/*III. You have been given two sorted integer arrays of size m and n. Design an algorithm and implement it 
using a program to find list of elements which are common to both. (Time Complexity = O(m+n))*/


#include<iostream>
using namespace std;

void CommonElements(int[],int[],int,int);

int main()
{
    int m;
    cout<<"Enter the number of elements in first array: ";
    cin>>m;
    int arr1[m];
    cout<<"Enter the elements: ";
    for(int i=0;i<m;i++)
    {
        cin>>arr1[i];
    }
    cout<<endl;

    int n;
    cout<<"Enter the number of elements in second array: ";
    cin>>n;
    int arr2[n];
    cout<<"Enter the elements: ";
    for(int j=0;j<n;j++)
    {
        cin>>arr2[j];
    }
    cout<<endl;
    CommonElements(arr1,arr2,m,n);
return 0;
}

void CommonElements(int arr1[],int arr2[],int m,int n)
{
    int k=0,l=0;
    while(k<m && l<n)
    {
      if(arr1[k]<arr2[l])
      {
          k++;
      }
      if(arr2[l]<arr1[k])
      {
          l++;
      }
      else if (arr1[k]==arr2[l])
      {
          cout<<arr1[k]<<" ";
          k++;
          l++;
      }
    }
}