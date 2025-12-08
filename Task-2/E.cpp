#include <iostream>

using namespace std;

int main()
{
  int n ;
  cin >> n;
  string s ;
  cin >> s;
  int freq[26]={0};
  bool con = true;
  if (n<26){
  cout<<"NO" ;
  }
  else {
 for(int i =0 ; i<s.size() ; i++){
  	if(s[i]>='a'&&s[i]<='z')
  	s[i]-=32;
  	freq[s[i] - 'A']++;

 } for(int i =0 ; i<26; i++){
  	if(freq[i]==0)
  	con=false;
 }
 if(con)
 cout<<"YES";
 else
 cout<<"NO";

  }

	return 0;
}
