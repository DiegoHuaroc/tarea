#include <iostream>
#include <string>
using namespace std;
string NumeroPalabra(int numero){
        string final="";
    int x[3]={0,0,0};
    string l[36]={"uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve","dies","once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve","veinte","treinta","cuarenta","cincuenta","sesenta","setenta","ochenta","noventa","ciento","doscientos","trescientos","cuatrocientos","quinientos","seiscientos","setecientos","ochocientos","novecientos"};                                                                   
    // 1 a 20 21 22.30 29.90 38.900
    int a=numero/1000000;
    x[0]=a;
    string m[3]={"millones ","mil ",""};
    numero-=a*1000000;
    a=numero/1000;
    x[1]=a;
    x[2]=numero-a*1000;
    for(int i=0;i<3;i++){
        if(x[i]!=0){
            int centena=x[i]/100;
            int decena=x[i]%100;
            if(centena!=0){
                if(centena==1 && decena==0) final+="cien ";
                else final+=l[centena+26]+" ";
            }
            if(decena!=0){
                if(decena<21){
                    final+=l[decena-1];
                    final+=" ";
                }
            
                else{
                    if(decena<30){
                        final+="veinti";
                        final+=l[decena-21];
                        final+=" ";
                    }
                    else{
                    final+=l[(decena/10) +17];
                    final+=" ";
                    if(decena%10!=0){
                        final+="y ";
                        final+=l[decena%10 -1];
                        final+=" ";
                    }
                    }
                }
            }
            final+=m[i];
            
        }
    }

    return final;
};
int main(){
    int n;
    cin>>n;
    

    cout<<NumeroPalabra(n);
    return 0;
}