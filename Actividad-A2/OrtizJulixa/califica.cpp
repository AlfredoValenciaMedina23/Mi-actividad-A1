#include<iostream>
using namespace std;
  int main()

{                                                        int c=0,estu=30,ca=0,cr=0,cn=0;

        float s=0,x;

        do	{                                            cout<<"Ingrese las calificaciones "<<c+1;
                cin>>x;
                c=c+1;
                if (x>=7)
                {
                ca=ca+1;
                }
                else
                {


                        if (x<=6)
                        {
                        cr=cr+1;                                              }
		
	}
                
                s=s+x;
        }while(c<estu);
        cout<<"Estudiantes aprobados: "<<ca<<endl;
        cout<<"Estudiantes reporbados: "<<cr<<endl;



        return (0);



}
