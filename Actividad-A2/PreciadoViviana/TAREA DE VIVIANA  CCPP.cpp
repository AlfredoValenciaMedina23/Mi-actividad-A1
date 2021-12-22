#include<iostream>
using namespace std;
int main()
{

	float x,l,c=0,a=0,ai=0,ae=0;
	cout<<"Ingresar numero limite: ";
	cin>>l;
	do {
		cout<<"ingrese el valor mensual: ";
		cin>>x;
		c=c+1;
		a=a+x;
		if (x>0){
			ai=ai+x;
		}else{
			ae=ae+x;
		}
	}
	while (c<l);
	cout<<"el saldo de egresos es de:"<<ae<<endl;
	cout<<"el saldo de ingresos es de:"<<ai<<endl;
	cout<<"el saldo total es de:"<<a<<endl;

	return (0);
}