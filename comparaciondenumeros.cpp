# include <iostream>
using namespace std;
int main ()
{
	int a;
	int b;
	int c;
	
	
	cout << "Ingrese a: ";
	cin >> a;
	cout << "Ingrese b: ";
	cin >> b;
	cout << "Ingrese c: ";
	cin >> c;
	
	if ( a > b, a > c )
	{
		cout << "el mayor es : " <<a;
	}
	else 
	if ( b > a, b > c )
	{
		cout << "el mayor es : " <<b;
	}
	else
	 if ( c > a, c > b )
	 {
		cout << "el mayor es :" <<c;
	}
	else
	 if ( a == b && b== c  ) 
	 {	
        cout << "iguales";
	}
	
	return 0;
	
}
