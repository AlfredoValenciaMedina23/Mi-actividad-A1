#include<iostream>
using namespace std;
int main()
{
     float x,c=0,l=30,Ea=0,Er=0;
     do{
            cout<<"Ingrese el promedio: ";
			cin>>x;
            c=c+1;
            if(x>7){
				Ea=Ea+x;
			}else{
				if(x<5){
					Er=Er+x;
	}else{}
	}
	}while(c<l);
    cout<<"aprueban: "<<Ea<<endl;
    cout<<"reprueban: "<<Er<<endl;
    return (0);
}