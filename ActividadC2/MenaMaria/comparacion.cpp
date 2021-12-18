#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout<<"\n ingrese numero x:";
    cin>>x;
    cout<<"\n ingrese numero y:";
    cin>>y;
	if(x==y){
	cout<<"El valor de x "<<x<<"es igual a y "<<y<<endl;
		
	}else{
	if(x<y)	{
	cout<<"El valor de y "<<y<<"Es menor a x "<<x<<endl;	
	}else{
	cout<<"El valor de x"<<x<<"Es menor a y "<<y<<endl;	
	}
	}
return (0);
}