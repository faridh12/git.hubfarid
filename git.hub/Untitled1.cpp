#include <iostream>
using namespace std;

int main()
{
	float uangku;
	cout<<"berapa uangku = "; cin>>uangku;
	
	if((uangku >= 75000) && (uangku <= 200000)) {
		cout<<"Sepatu baru. "<<endl;
		
	}
	else if(uangku >+ 200000){
		cout<<" gweh beli new balance. "<<endl;
	}
	else if (uangku < 75000){
		cout<<"gweh beli sendal. "<<endl;
	}
}
