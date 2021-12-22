# incluye  < iostream >

usando el  espacio de nombres  std ;
int  main ()
{
flotar a, b, c;
cout << " ingrese el valor de a: " ; cin >> a;
cout << " ingrese el valor de b: " ; cin >> b;
cout << " ingrese el valor de c: " ; cin >> c;

si (a> b)
{
    si (a> c)
    { 
              cout << "     a es mas alta " << endl;
    }
    demás
   {
              cout << "      c es mas alta " << endl;
    }
    
} más {
 
   si (b> c) {
           
                   cout << "   b es mas alta " << endl;
      } más {
                  cout << "    c es mas alta " << endl;
      }


}
return   0 ;

}