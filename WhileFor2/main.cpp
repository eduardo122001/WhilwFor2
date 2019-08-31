#include <iostream>

using namespace std;

int main()
{

    int n;
    cin>>n;


    //----------------potencia
    /*  int d=1;
        while(d){
        int nt=n;
        n=n/2;
        nt=nt%2;
        if(n==1 && nt==0){
            cout<<"es potencia de 2"<<endl;
            d=d-1;
        }
        if(n!=1 && nt!=0){
            cout<<"no es potencia de 2"<<endl;
            d=d-1;
        }
    }*/
    //------numero perfecto---------------
    //for
    /*int m=1;
    int perf=0;
    for(m;m<n;m++){

        int g=n%m;

        if(g==0){
            perf=perf+m;

        }
    }
    if(perf==n){
    cout<<"es perfecto"<<endl;}*/

    //while
    /*int p=1;
    int d=1;
    int perfe=0;
    while(p){
        int h=n%d;
        if(h==0){
            perfe=perfe+d;
        }
        if(n-1==d){p--;}
        else{d++;}
    }
    if(perfe==n){
    cout<<"es perfecto"<<endl;}*/

    //--------si es primo o no-----------
    //for

       /* int x=0;
        int i=1;
        for(i;i<=n;i++){
            int y=n%i;
            if(y==0){
            x++;}

                }
        if(x==2){
            cout<<"es primo"<<endl;
        }
        else{
            cout<<"no es primo"<<endl;
        }*/

    //while
    /*int p=1;
    int d=1;
    int pri=0;
    while(p){
        int h=n%d;
        if(h==0){
            pri++;
        }
        if(n==d){p--;}
        else{d++;}
    }
    if(pri==2){
    cout<<"es primo"<<endl;}
    else{cout<<"no es primo"<<endl;}*/

    //---numeros primos del 1 al 100------
    //for
     /*   int a=1;
        for(a;a<=100;a++){
            int b=1;
            int cant=0;

            for(b;b<=a;b++){
                int t=a%b;
                if(t==0){
                cant++;}
            }

            if(cant==2){
                cout<<a<<endl;
            }
        }*/
    //while
    /*    int e=1;
        int s=1;
        while(e){
            int y=1;
            int m=1;
            int canti=0;
            while(y){
                int o=s%m;
                if(o==0){
                    canti++;
                }
                if(m==s){
                    y--;}
                else{m++;}

            }
            if(canti==2){cout<<s<<endl;}
            if(s==100){e--;}
            else{s++;}
        }
*/
    //-----------------


    return 0;
    }
