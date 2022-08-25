#include <iostream>
using namespace std;

void negative(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[j]<0){
                swap(arr[i],arr[j]);
                break;
            }
        }
    }
}

int main()
{
    int a[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = 9;
    negative(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}
