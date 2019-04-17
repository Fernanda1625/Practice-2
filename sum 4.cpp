#include <iostream>
using namespace std;

int sum (const int x=0, const int y=0 , const int z=0, const int w=0){
	return x+y+z+w;
}

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<sum(a,b,c,d)<<endl;
	cout<<sum(1,2)<<endl;
	cout<<sum(1,3,5)<<endl;
	return 0;
}
