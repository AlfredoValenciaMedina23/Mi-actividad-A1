#include<iostream>
using namespace std;
int main()

{
	float x,y;
	cout<<"Ingrese el valor de x ";
	cin>>x;
	
	cout<<"Ingrese el valor de y ";
	cin>>y;
	
	//Programa para comparar dos numeros
	if(x==y)
	{
		cout<<"El valor de x-> "<<x<<" Es igual a y-> "<<y<<endl;
	}
	else
	{
	if (x>y)
	{
	cout<<"El valor de x-> "<<x<<" Es mayor a y-> "<<y<<endl;
	}	
	else
	{
		
	cout<<"El valor de y-> "<<y<<" Es mayor a x-> "<<x<<endl;	
	} 		
	}
	
	return 0;
}
