#include<iostream>
#include <vector>
using namespace std;
bool isPalindrome(int x) {
        if(x<0) return false;
        else{
            int d=x,n=0;
            vector<int>v;
            while(d!=0){
                int l=d%10;
                v.push_back(l);
                n++;
                d=d/10;
            }
            int a=0,b=n-1,flag=0;
            while(a<=b){
                if(v[a]!=v[b]){
                	//cout<<v[a+2]<<" "<<v[b-3]<<endl;
                    flag=1;
                    break;
                }
                else{
                    a++;
                    b--;
                    continue;
                }
            }
            cout<<flag<<endl;
            if(flag==0) return true;
            else return false;
        }
		}
int main(){
	int n;
	cin>>n;
	if(isPalindrome(n)) cout<<"true"<<endl;
	else cout<<"false"<<endl;
}  
