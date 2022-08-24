#include<iostream>
using namespace std;

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int temp1,temp2;
    	temp1 = temp2 = A[0];
    	for(int i=1;i<N;i++){
    	    if(temp1>A[i]){
    	        temp1 = A[i];
    	    }
    	}
    	
    	for(int i=1;i<N;i++){
    	    if(temp2<A[i]){
    	        temp2 = A[i];
    	    }
    	}
    	return temp1+temp2;
    }

};

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}