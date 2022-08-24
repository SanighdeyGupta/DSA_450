#include<iostream>
using namespace std;

class Solution
{
    public:
    void sort012(int a[], int n)
    {
        int arr[3];
        int count = 0;
        int i=0;
        while(i<3){
            count = 0;
            for(int j=0;j<n;j++){
                if(a[j]==i){
                    count++;
                }
            }
            arr[i] = count;
            i++;
        }
        i=0;
        int k=0;
        while(i<3){
           for(int j=0;j<arr[i];j++){
              a[k] = i;
              k++;
           }
           i++;
        }
    }
    
};

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}