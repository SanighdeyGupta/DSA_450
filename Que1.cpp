#include<iostream>
using namespace std;

string reverseWord(string str);

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

string reverseWord(string str){
    int size = str.length();
    for(int i=0;i<(size/2);i++){
        char temp = str[i];
        str[i] = str[size-1-i];
        str[size-1-i] = temp;
        
    }
  return str;
}