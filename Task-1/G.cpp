#include <iostream>
using namespace std;
int main()
{
	int k , r;
	cin >> k>> r ;
		int n =1;
    for(int i =1 ; i<= 10;i++){

    	int minn= n*k;
    	if(minn%10==0 || minn%10==r){
    		cout <<n;
    		break;
    	}
    	else
    	n++;


	}
	return 0;
}
