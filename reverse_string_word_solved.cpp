#include <bits/stdc++.h>
using namespace std;
int main() {
	//code
	int T;
	cin >> T;
	string s;
	while(T--)
	{
	    cin >> s;
	    string str ="";
	    string B = "";
	    for(int i = s.size()-1; i >= 0; i--)
	    {
	        if(s[i] != '.')
	        B = s[i]+B;
	        else
	        {
	            str = str+B+".";
	            B ="";
	        }
	    }
	    str = str+B;
	    cout << str <<endl;
	}
	return 0;
}