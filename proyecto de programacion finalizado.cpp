#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main()
{
	
	string apellido,apellido2;
	string numero_cuenta="5579_1000_3146_9709_mastercard_UPEM";
	int cuenta_nueva,opcion,opcion2;
	string usuario;
	int constrasenia;
	float saldo,retiro,ingresar,pago_agua,pago_telefono,pago_tv,descuento;
	float saldo_total=saldo;
	while(cuenta_nueva!=3){
		fflush(stdin);
		system("CLS");
	
	cout<<"BIENVENIDO AL BANCO UPEM"<<endl;
	cout<<"Antes de ingresar al cajero debes hacer una nueva cuenta de usuario"<<endl;
	cout<<"1 crear cuenta nueva"<<endl;
	cout<<"2 ingresar al cajero"<<endl;
	cout<<"3 salir"<<endl;
	cin>>cuenta_nueva;
	fflush(stdin);
	system("CLS"); 
	if(cuenta_nueva==1)
	{
	
	int cualquier;
	
		cout<<"Dime su nombre "<<endl;
		cin>>usuario;
		cout<<"Dime su apellido "<<endl;
		cin>>apellido;
		cout<<"Dime su segundo apellido "<<endl;
		cin>>apellido2;
		cout<<"Digite su constraseña de usuario en enteros"<<endl;
		cin>>constrasenia;
		cout<<"Digite el saldo que va ingresar"<<endl;
		cin>>saldo;
		fflush(stdin);
		fflush(stdin);
		system("CLS"); 
		cout<<"Bienvenido "<<usuario<<" "<<apellido<<" "<<apellido2<<" \n Su nueva cuenta ya esta hecha \n" <<"Constraseña :"<<constrasenia<<" NO LA OLVIDE"<<endl;
		cout<<"Su numero de cuenta sera :"<<numero_cuenta<<endl;
		cout<<"Pulse cualquier tecla para volver al menu principal de 1 a 9 :";cin>>cualquier;
		system("CLS"); 
	}
	else if(cuenta_nueva==2)
	{
		
		string nombre;
		int password;
		int cuenta=1;
		
		
		
		while(cuenta!=4){
		int cualquiera2;
		cuenta++;
		fflush(stdin);
		cout<<"Ingrese su nombre de usuario para entrar"<<endl;
		cin>>nombre;
		cout<<"Ingrese su constraseña de usuario para entrar"<<endl;
		cin>>password;
		fflush(stdin);
		system("CLS");
		
		if((nombre==usuario) && (password==constrasenia)){//marca de agua
			while(opcion!=6){//inicio de while
				fflush(stdin);
				system("CLS");
		
		cout<<"Bienvenido  "<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
		cout<<"Que opcion deseas realizar"<<endl;
		cout<<" 1 Consultar saldo este movimiento tendra un costo de 25$ "<<endl;
		cout<<" 2 Mostrar el numero de cuenta "<<endl;
		cout<<" 3 Retiro de dinero"<<endl;
		cout<<" 4 Ingresar dinero asu cuenta "<<endl;
		cout<<" 5 Realizar un pago en especifico"<<endl;
		cout<<" 6 salir"<<endl;
		cin>>opcion;
		switch(opcion){//inicio de switch
		case 1:
			int cualquiera3;
			fflush(stdin);
			system("CLS");
			cout<<"\nSu saldo actual es :"<<saldo<<" con un costo de 25$"<<endl;
			saldo_total=saldo-25;
			cout<<" \nCon numero de cuenta :"<<numero_cuenta<<endl;
			cout<<" \nusuario :"<<nombre<<" "<<apellido<<" "<<apellido<<endl;
			cout<<"\nSaldo actual con el cobro ahora es"<<saldo_total<<endl;
			cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
			cout<<"Pulse cualquier tecla para volver al menu principal de 1 a 9 :";
			cin>>cualquiera3;
			
			break;
		case 2:
			int cualquier4;
			fflush(stdin);
			system("CLS");
			cout<<"\nSu numero de cuenta es :"<<numero_cuenta<<endl;
			cout<<"\nDel usuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
			cout<<" HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
			cout<<"Pulse cualquier tecla y enter para volver al menu principal de 1 a 9 :";
			cin>>cualquier4;
			break;
		case 3:
			int cualquier5;
			fflush(stdin);
			system("CLS");
			cout<<"\nIngresen la cantidad que va retirar :";
			cin>>retiro;
			if(retiro>saldo_total){//inicio de if de case 3
				fflush(stdin);
				system("CLS");
				cout<<"ERROR sobrepasa su saldo intente de nuevo"<<endl;
			}//fin de if de case 3
			else{//else case 3
				fflush(stdin);
				system("CLS");
				cout<<"\nA retirado esta cantidad:"<<retiro<<endl;
				saldo_total-=retiro;
				cout<<"\nSu saldo actual es :"<<saldo_total<<endl;
				cout<<"\nNumero de cuenta :"<<numero_cuenta<<endl;
				cout<<"\nUsuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
				cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
				cout<<"Pulse cualquier tecla y enter para volver al menu principal de 1 a 9 :";
				cin>>cualquier5;
				break;
			}//else case 3
		case 4:
			   int cualquier6;
			   fflush(stdin);
			   system("CLS");
			   cout<<"Ingrese la cantidad que va ingresar :";
			   cin>>ingresar;
			   saldo_total+=ingresar;
			   cout<<"Su saldo actual es :"<<saldo_total<<endl;
			   cout<<"\nNumero de cuenta :"<<numero_cuenta<<endl;
			   cout<<"\nUsuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
			   cout<<"\nHASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
			   cout<<"Pulse cualquier tecla y enter para volver al menu principal de 1 a 9 :";
			   cin>>cualquier6;
			   break;
		case 5:
			fflush(stdin);
			system("CLS");
			while(opcion2!=4){//inicio de while case 5
				fflush(stdin);
				system("CLS");
			
			cout<<"Menu de pago eliga un aopcion"<<endl;
			cout<<"1 pago de agua"<<endl;
			cout<<"2 pago de telefono"<<endl;
			cout<<"3 pago de tv por cable"<<endl;
			cout<<"4 Salir"<<endl;
			cin>>opcion2;
			switch(opcion2){//inici de switch de case 5
			case 1:
				fflush(stdin);
				system("CLS");
				cout<<"Digite el monto a pagar de recibo de agua :";
				cin>>pago_agua;
				if(pago_agua>5000){
					fflush(stdin);
					system("CLS");
				descuento=pago_agua*0.05;
				cout<<"A pagado :"<<pago_agua;
				cout<<"\nDescuento por pagar mas de 5000 de 5% :"<<descuento;
				saldo_total-=(pago_agua-descuento);
				cout<<"\nSu saldo actual es con el pago:"<<saldo_total;
				cout<<"\nNumero de cuenta :"<<numero_cuenta<<endl;
				cout<<"\nUsuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
				cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
				cout<<"Pulse cualquier tecla  y enter para volver al menu  de 1 a 9 :";
				int a;cin>>a;}
				else{
					fflush(stdin);
					system("CLS");
					cout<<"\nA pagado :"<<pago_agua;
					saldo_total-=pago_agua;
					cout<<"\nSu saldo actual es con el pago:"<<saldo_total;
					cout<<"\nNumero de cuenta :"<<numero_cuenta<<endl;
					cout<<"\nUsuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
					cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
					cout<<"Pulse cualquier tecla  y enter para volver al menu  de 1 a 9 :";
					int b;cin>>b;
				}
				break;
			case 2:
				fflush(stdin);
				system("CLS");
				cout<<"Digite el monto a pagar de recibo de telefono :";
				cin>>pago_telefono;
				if(pago_telefono>5000){
					fflush(stdin);
					system("CLS"); 
					descuento=pago_telefono*0.05;
					cout<<"\nA pagado :"<<pago_telefono;
					cout<<"\nDescuento por pagar mas de 5000 de 5% :"<<descuento;
					saldo_total-=(pago_telefono-descuento);
					cout<<"\nSu saldo actual es con el pago:"<<saldo_total;
					cout<<"\nNumero de cuenta :"<<numero_cuenta<<endl;
					cout<<"\nUsuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
					cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
					cout<<"Pulse cualquier tecla  y enter para volver al menu  de 1 a 9 :";
				int c;cin>>c;}
		            else {
					fflush(stdin);
					system("CLS"); 
					cout<<"\nA pagado :"<<pago_telefono;
				saldo_total-=pago_telefono;
				cout<<"\nSu saldo actual es con el pago:"<<saldo_total;
				cout<<"\nNumero de cuenta :"<<numero_cuenta<<endl;
				cout<<"\nUsuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
				cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
				cout<<"Pulse cualquier tecla  y enter para volver al menu  de 1 a 9 :";
				int d;cin>>d;}
				
				break;
			case 3:
				
				fflush(stdin);
				system("CLS");
				cout<<"Digite el monto a pagar de recibo de tv por cable:";
				cin>>pago_tv;
				if(pago_tv>5000){
					fflush(stdin);
					system("CLS"); 
					descuento=pago_tv*0.05;
					cout<<"\nA pagado :"<<pago_tv;
					cout<<"\nDescuento por pagar mas de 5000 de 5% :"<<descuento;
					saldo_total-=(pago_tv-descuento);
					cout<<"\nSu saldo actual es con el pago:"<<saldo_total;
					cout<<"\nNumero de cuenta :"<<numero_cuenta<<endl;
					cout<<"\nUsuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
					cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
					cout<<"Pulse cualquier tecla  y enter para volver al menu  de 1 a 9 :";int e;cin>>e;}
				
				
		else {
					fflush(stdin);
					system("CLS"); cout<<"\nA pagado :"<<pago_tv;
				saldo_total-=-pago_tv;
				cout<<"\nSu saldo actual es con el pago:"<<saldo_total;
				cout<<"\nNumero de cuenta :"<<numero_cuenta<<endl;
				cout<<"\nUsuario :"<<nombre<<" "<<apellido<<" "<<apellido2<<endl;
				cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido<<endl;
				cout<<"Pulse cualquier tecla  y enter para volver al menu  de 1 a 9 :";
		int f;cin>>f;}
				break;
			default:cout<<""<<endl;
			}//Fin de switch de case 5
			
			
			}//fin de while case 5
		default:cout<<"HASTA PRONTO "<<nombre<<" "<<apellido<<" "<<apellido2;
		}//fin del switch
		if(opcion==6)
		{ return 0;}
			
			}//fin de while
		
		
		
		}//marca de agua
		//apatir de aqui comienza el cobro;
		else if (cuenta==2){
			cout<<"Te quedan dos intentos"<<endl;
		
		}
		else if(cuenta==3){cout<<"Te quedan un intentos"<<endl;
		}
		else{
			fflush(stdin);
			system("CLS");
			cout<<"Error"<<endl;
			cout<<"INTRUSO RECOGER TARJETA DE INMEDIATO"<<endl;
			cout<<"LA POLICIA VIENE EN CAMINO";
			return 0;
			//cout<<"VOLVER AL MENU PRINCIPAL PARA CREAR NUEVA CUENTA"<<endl;
			//cout<<"Presiones cualquier tecla 1 a 9 y enter para salir: ";cin>>cualquiera2;
		}
		}
		
	}
	else{cout<<"Hasta pronto  "<<usuario;
	}
	}
		
	
	
	
	getch();
	return 0;
}

