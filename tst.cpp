#include<cstdlib>
#include<iostream>
#include<locale.h>
#include<stdio.h>
using namespace std;

enum op{ sair, trioelec, arcond, direcao, completo };

int main ( void ) {
	string opcionais[] = { "no_name","Trio Eletrico","Ar Condicionado","Direcao Hidraulica"};
    double vfabrica;
    bool falso = false;
    int contador[completo] = {0};
    
    
    cout<<"Promoção imperdível da versão completa!\n";
    cout<<"Digite o valor da versão de fabrica!:\n";
    cin>>vfabrica;    
    
    do{
        cout<<"Quais opcionais vc deseja ?\n";
        cout<<"0 - Sem opcionais\n";
        cout<<"1 - Alarme, vidros e travas eletricas\n";
        cout<<"2 - Ar Condicionado\n";
        cout<<"3 - Direcao Hidraulica\n";
        cout<<"4 - Completo\n";
        unsigned short int op;
        cin>> op;
    
        switch (op) {
        case trioelec:     contador[trioelec]++; break;
            case arcond:     contador[arcond]++; break;
            case direcao:  contador[direcao]++; break;
            case completo: for ( int c=1; c < completo ; c++) {contador[c]++; } break;
            case sair:     falso = true; break;
            default:       break;
        }
        system("cls");
    }while( !falso );
    
     for ( int c = 1; c<completo ;c++ ) {
        cout << opcionais[c] << ":  " << contador[c] << endl;
    }
    
   contador[0,1,2,3,4]=0;
    
    if(contador[1]>=1 && contador[ 4]<=0 ){
   	cout<<"Valor com trio eletrico R$:"<<vfabrica+1000<<endl;
	}
	if(contador[2]>=1 && contador[1 , 3 , 4]<=0 ){
	cout<<"Valor com ar condicionado R$:"<<vfabrica+2000<<endl;	
	}
    if(contador[3]>=1 && contador[1 , 2 , 4]<=0) {
	cout<<"Valor com direção hidraulica R$:"<<vfabrica+3000<<endl;	
	}
    if(contador[4]>=-1 && contador [2]==1 && contador[1]==1 && contador[3]==1 ) {
	 cout<<"Valor da versão completa R$:"<<vfabrica+5000<<endl;
	}
    if(contador[0]>=-1 && contador[2]==0 && contador[1]==0 && contador[3]==0 ) {
	cout<<"Valor dá versão de fábrica R$:"<< vfabrica <<endl;	
	}
	if(contador[1]&&contador [2] && contador[3]==0 ){
	cout<<"Valor com trio eletrico e ar condicionado R$:"<<vfabrica+3000<<endl;	
	}
	if(contador[1] && contador[3] && contador[2]==0 ){
	cout<<"Valor com trio eletrico e direção hidraulica R$:"<<vfabrica+4000<<endl;	
	}
	if(contador[2] && contador[3] && contador[1]==0 ){
	cout<<"Valor com ar condicionado e direção hidraulica R$:"<<vfabrica+4500<<endl;	
	}
    cin.ignore();
    return EXIT_SUCCESS;
}
