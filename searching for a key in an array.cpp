

//linear sreach
#include<iostream>
using namespace std;
 bool search(int arr[],int size, int key){
     
 }
 
 int main(){
     int arr[5]={ 1,4
     ,6,3,9};
     // search for 3
   cout<<"Enter the element for search"<<endl;
   int key;
   cin>>key;
   bool found= search(arr, 5,key);
   
   if (found)  {
       cout<<"key is present"<<endl;}
   else{
       cout<<"Key is not present"<<endl;
   }
       
   return 0; 
 }