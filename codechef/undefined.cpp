#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	float x,y,m;
	cin>>x;
	cin>>setprecision(2)>>fixed>>y;
	if(int(x)%5==0&&(x+0.5)<y)
    m=(y-x-0.5);
    else m=y;
    cout<<endl<<setprecision(2)<<fixed<<m;
	return 0;
}
