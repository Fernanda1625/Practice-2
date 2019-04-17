#include <iostream>
using namespace std;

double sum(double x, double y){
	return  x+y;
}

int main(){
	double x, y;
	cin >> x >> y;
	cout << sum(x,y);
	return 0;
}
