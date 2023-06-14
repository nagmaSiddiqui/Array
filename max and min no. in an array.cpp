

#include <iostream>
#include <climits>

using namespace std;
int getMin(int arr[], int n){
    int min=INT_MAX;
    for(int i=0; i<n;i++){
        if(arr[i]<min){
                min=arr[i];
        }
}
    return min;
}

int getMax(int arr[] ,int n){
    int max=INT_MIN;
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}


int main()
{
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Maximum value is:"<<getMax(arr,size)<<endl;
    cout<<"Minimum value is:"<<getMin(arr,size)<<endl;

    return 0;
}
