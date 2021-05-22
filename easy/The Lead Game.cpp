#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int s[n];
	int t[n];
	for(int i=1;i<=n;i++){
	    cin>>s[i]>>t[i];
	}
	int lead1=0,lead2=0,max_lead1=0,max_lead2=0;
	int p1=0,p2=0;
	for(int i=1;i<=n;i++){
        p1+=s[i];
        p2+=t[i];
	    if(p1>p2){
	        lead1=p1-p2;
	        if(lead1>=max_lead1){
	            max_lead1=lead1;
	        }
	    }
	    else if(p1<p2){
	        lead2=p2-p1;
	        if(lead2>=max_lead2){
	            max_lead2=lead2;
	        }
	    }
	}
    if(max_lead1>max_lead2){
        cout<<1<<" "<<max_lead1;
    }
    else{
        cout<<2<<" "<<max_lead2;
    }
	
	return 0;
}
