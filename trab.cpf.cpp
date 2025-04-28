#include <iostream>
using namespace std;
#include <locale.h>


int main(){
    
    setlocale(LC_ALL,"Portuguese");
    
    int CPF; 
    int A, B, C, D, E, F, G, H, I, Ax, Bx, Cx, Dx, Ex, Fx, Gx, Hx, Ix;
    int CV1, CV2, CVx;
    
    cout << "Digite seu CPF sem o codigo verificador (os ultimos dois digitos): ";
    cin >> CPF; 
    
    if (CPF < 10000 || CPF > 999999999) {
        cout << "ERRO! O numero digitado deve conter 9 digitos." << endl;
        return 0;}
    
    I=CPF%10; 
    CPF=CPF/10;
    H=CPF%10; 
    CPF=CPF/10;
    G=CPF%10; 
    CPF=CPF/10;
    F=CPF%10; 
    CPF=CPF/10;
    E=CPF%10; 
    CPF=CPF/10;   
    D=CPF%10; 
    CPF=CPF/10;      
    C=CPF%10; 
    CPF=CPF/10;
    B=CPF%10; 
    CPF=CPF/10;
    A=CPF%10; 
    CPF=CPF/10;
    //Usado para separar cada número.
    
    Ax=A*10; Bx=B*9; Cx=C*8; Dx=D*7; Ex=E*6; Fx=F*5; Gx=G*4; Hx=H*3; Ix=I*2;
    CV1=Ax+Bx+Cx+Dx+Ex+Fx+Gx+Hx+Ix;
    CV1=CV1%11;

    if (CV1<2){
        CV1=0;
    }else{
        CV1=11-CV1;
    }
    //Usado para determinar o PRIMEIRO digito do código verificador.
    
    Ax=A*11; Bx=B*10; Cx=C*9; Dx=D*8; Ex=E*7; Fx=F*6; Gx=G*5; Hx=H*4; Ix=I*3; CVx=CV1*2;
    CV2=Ax+Bx+Cx+Dx+Ex+Fx+Gx+Hx+Ix+CVx;
    CV2=CV2%11;
    if (CV2<2){
        CV2=0;
    }else{
        CV2=11-CV2;
    }
    //Usado para determinar o SEGUNDO digito do código verificador.
    
    cout <<endl<< "Seu CPF com o codigo verificador: " <<A<<B<<C<<"."<<D<<E<<F<<"."<<G<<H<<I<<"-"<<CV1<<CV2;
    
    return 0;
}
