//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int flag = 0;
            if(n<m){
                int j = 0;
                while(j<m){
                    flag = 0;
                for(int i=j;i<n;i++){
                    if(arr1[i]>arr2[j]){
                        swap(arr1[i],arr2[j]);
                        flag = 1;
                    }
                }
                if(flag == 0){
                    break;
                }
                j++;
                }
                sort(arr2,arr2+m);
            }
            else{
               int j = 0;
                while(j<n){
                    flag = 0;
                for(int i=j;i<m;i++){
                    if(arr2[i]>arr1[j]){
                        swap(arr2[i],arr1[j]);
                        flag = 1;
                    }
                }
                if(flag == 0){
                    break;
                }
                j++;
                }
                int temp = m;
                m = n;
                for(int i=0;i<m;i++){
                    swap(arr2[i],arr1[i]);
                }
                n = temp;
                 sort(arr2,arr2+m);
            }
        } 
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends