/*I. Given an unsorted array of alphabets containing duplicate elements. Design an algorithm and implement it using a program to find which 
alphabet has maximum number of occurrences and print it. (Time Complexity = O(n)) (Hint: Use counting sort)*/


#include<iostream>
using namespace std;

void CountOcc(char[],int);
int main()
{
    
    int T;
    cout<<"Enter the number of testcases: ";
    cin>>T;
    while(T>0)
    {
      int n;
      cout<<"Enter the number of alphabets: ";
      cin>>n;
      char arr[n];
      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }
    CountOcc(arr,n);
    T--;
    }
return 0;
}

void CountOcc(char arr[],int n)
{
    int count[26]={0};

    for(int j=0;j<n;j++)
      count[arr[j]-97]++;
  

    int max = count[0] , index = 0;

    for(int i = 1; i < 26; ++i){

      if(count[i] > max){
        max = count[i];
        index = i;

      } 
  }
cout << (char)(97 + index) << " -> " << max;
}
