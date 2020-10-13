#include <bits/stdc++.h>
using namespace std;
void word_reverse(char *s){
    char *word_begin = NULL;
    char *temp = s;
    for(int i = 0; i < strlen(s); i++){
        while((word_begin == NULL) && (*(temp)!=' ')){
            word_begin = temp+i;
        }
        if(word_begin && (temp[i+1]=='.') || (temp[i+1] == '\0')){
            reverse(word_begin, temp+i);
            word_begin = NULL;
        }
    }
    reverse(s, (temp+strlen(s)-1));
}
void reverse(char *start, char *end){
    while(start<end){
        swap(*start, *end);
        start++;
        end--;
    }
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    char s[2000];
	    cin>>s;
	    word_reverse(s);
	    cout<<s;
	}
	return 0;
}