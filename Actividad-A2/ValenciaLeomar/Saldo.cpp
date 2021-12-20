#include<iostream>

using namespace std;
int main()
{
	int x,c=0,l;
	float s=0,si=0,se=0;
	cout<<"Ingrese el limite: ";
	cin>>l;
	do
	{
		//Proceso de ingresar
		cout<<"Ingrese saldo: "<<c+1<<": ";
		cin>>x;
		//acumulador
		c=c+1;
		//Suma
		s=s+x;
		//condicion
		{
			if (x>0)
			{
				si=si+x;
			}
			else
			{
			se=se+x;		
			}
		}
	}
	while(c<l);
	cout<<"Los ingresos: "<<si<<endl;
	cout<<"Los egresos: "<<se<<endl;
	cout<<"Saldo restante: "<<s<<endl;
	return (0);
	
	

}
