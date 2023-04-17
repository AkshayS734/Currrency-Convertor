#include<iostream>
#include<string>
using namespace std;
class Currency{
    public:
    double num,pound,euro,rupee,yen,dollar;
    Currency(){
        cout<<"Currency conversion :)"<<endl;
    }
    void Dollar(double num){
        pound = num*0.80;
        euro = num*0.90;
        rupee = num*81.85;
        yen = num*133.82;
        dollar=num*1;
    }
    void Pound(double num){
        euro=1.12;
        rupee=101.68;
        dollar=1.24;
        yen=166.24;
        pound=num*1;
    }
    void Rupee(double num){
        pound = num*0.0098;
        euro = num*0.011;
        dollar = num*0.012;
        yen = num*1.65;
        rupee= num*1;
    }
    void Euro(double num){
        pound = num*0.89;
        rupee = num*90.87;
        dollar = num*1.11;
        yen = num*148.60;
        euro=num*1;
    }
    void Yen(double num){
        pound=num*0.0060;
        euro=num*0.0067;
        rupee=num*0.61;
        dollar =num*0.0075;
        yen=num*1;
    }

};
int main(){
    double x;
    string Currency1,Currency2;
    Currency c1;
    cout<<"Enter the number : ";
    cin>>x;
    cout<<"Enter the currency you want to convert."<<endl;
    cout<<"Use USD for Dollar, INR for Rupee, EUR for Euro, GBP for Pound, YEN for Yen : ";
    cin>>Currency1;
    if(Currency1=="USD"){
        c1.Dollar(x);
    }
    else if(Currency1=="GBP"){
        c1.Pound(x);
    }
    else if(Currency1=="INR"){
        c1.Rupee(x);
    }
    else if(Currency1=="EUR"){
        c1.Euro(x);
    }
    else if(Currency1=="YEN"){
        c1.Yen(x);
    }
    else{
        cout<<"INVALID INPUT";
    }
    cout<<"Enter the currency in which you want to convert."<<endl;
    cout<<"Use USD for Dollar, INR for Rupee, EUR for Euro, GBP for Pound, YEN for Yen : ";
    cin>>Currency2;
    if(Currency2=="USD"){
        cout<<"The value in Dollars is "<<c1.dollar;
    }
    else if(Currency2=="GBP"){
        cout<<"The value in Pounds is "<<c1.pound;
    }
    else if(Currency2=="INR"){
        cout<<"The value in Rupees is "<<c1.rupee;
    }
    else if(Currency2=="EUR"){
        cout<<"The value in Euros is "<<c1.euro;
    }
    else if(Currency2=="YEN"){
        cout<<"The value in Yens is "<<c1.yen;
    }
    else{
        cout<<"INVALID INPUT";
    }
}