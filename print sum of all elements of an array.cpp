

//print sum of all elements of an array
#include<iostream>
using namespace std;
int main(){
	int sum =0;
	int size;
	cin>>size;
	int arr[100];
	for (int i = 0; i < size; i++) {
      cout << "Enter Value for array " << " : ";
      cin >> arr[i];
   }
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	
		
	}
	cout<<sum<<endl;
}