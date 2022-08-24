#include<iostream>
using namespace std;

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
        void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
    
    int partition(int arr[], int l, int r)
{
    int x = arr[r], i = l;
    for (int j = l; j <= r - 1; j++) {
        if (arr[j] <= x) {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }
 
    swap(&arr[i], &arr[r]);
    return i;
}
    
    int kthSmallest(int arr[], int l, int r, int k) {
        if (k > 0 && k <= r - l + 1) {

        int pos = partition(arr, l, r);
        if (pos - l == k - 1)
            return arr[pos];
        if (pos - l > k - 1) 
            return kthSmallest(arr, l, pos - 1, k);
        return kthSmallest(arr, pos + 1, r,
                           k - pos + l - 1);
    }
    return INT_MAX;
    }
    

};
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}