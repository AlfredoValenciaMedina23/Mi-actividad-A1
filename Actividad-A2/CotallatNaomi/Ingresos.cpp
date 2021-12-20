#include<iostream>
using namespace std;


int main()

{	

    int x,c=0,l;
	float s=0,si=0,se=0;
	cout<<"Ingrese limite-> ";
	cin>>l;
	do{
		cout<<"Ingrese saldo "<<c+1<<"-> ";
		cin>>x;
		c=c+1;
		s=s+x;
		{	if (x>0)
			{
				si=si+x;
			}	else
			{
			se=se+x;		
			}
		}
	}
	//Limite que se ingreso
	while(c<l);
	//Resultados
	cout<<"Ingresos-> "<<si<<endl;
	cout<<"Egresos-> "<<se<<endl;
	cout<<"Saldo que cuenta-> "<<s<<endl;
	return (0);
}
