#include<iostream>
using namespace std;
int main ()
{
        float x,y;
        cout<<"ingrese número x: ";
        cin>>x;
	cout<<"ingrese numero y: ";
	cin>>y;
        if (x==y) {
        cout<<"el número de x"<<x<<"es igual a y"<<y<<endl;
        }else{
        if (x<y) {
        cout<<"el valor de y"<<y<<"es menor a x"<<x<<endl;
        }else{
        cout<<"el valor de x"<<x<<"es menor a y"<<x<<endl;
        }
        }
        return (0);
}
