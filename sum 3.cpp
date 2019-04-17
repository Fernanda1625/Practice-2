#include <iostream>
using namespace std;

int sum (int x,int y, const int z=0, const int w=0){
	return x+y+z+w;
}

int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<sum(a,b,c,d)<<endl;
	cout<<sum(1,2);
	return 0;
}
