#include<iostream>
using namespace std;
int main()
{ 
int x,c=0,l; 
float s=0,sn=0, sm=0; 
cout<<"Ingrese el Límite: "; 
cin>>l; 
do
{ 
cout<<"Ingrese el Saldo: "<<c+1<<":"; cin>>x; 
c=c+1; 
s=s+x; 

if (x>0) 
{ 
sn=sn+x; 
} 
else
{ 
sm=sm+x; 
} 

} 
while (c<l); 
cout<<"Los Ingresos son: " <<sn<<endl;
cout<<"Los Egresos son: " <<sm<<endl; 
cout<<"El Saldo restante es de: "<<s<<endl;
return (0);
}
