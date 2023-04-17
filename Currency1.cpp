#include<iostream>
#include<string>
using namespace std;
class Currency{
    public:
    double num;
    string currency1,currency2;
    double rupee,dollar,yen,pound,euro;
    int getcurrency1(){
        cout<<"Enter the anmount you want to convert : ";
        cin>>num;
        
        cout<<"Enter the currency you want to convert.\n";
        cout<<"Use USD for American Dollar,EUR for Euro,GBP for Pounds,INR for Indian Rupees,YEN for Japanese Yen : ";
        cin>>currency1;
        cout<<"Enter INR for converting into Rupees, GBP for pounds, EUR for euro, USD for Dollar, YEN for Yen :";
        cin>>currency2;
    }
    int operation(){
        if (currency1=="USD"){
        pound = num*0.80;
        euro = num*0.90;
        rupee = num*81.85;
        yen = num*133.82;
        dollar=num*1;
    }
    else if (currency1=="INR"){
        pound = num*0.0098;
        euro = num*0.011;
        dollar = num*0.012;
        yen = num*1.65;
        rupee= num*1;
    }
    else if (currency1=="EUR"){
        pound = num*0.89;
        rupee = num*90.87;
        dollar = num*1.11;
        yen = num*148.60;
        euro=num*1;
    }
    else if (currency1=="YEN"){
        pound=0.0060;
        euro=0.0067;
        rupee=0.61;
        dollar =0.0075;
        yen=num*1;
    }
    else if(currency1=="GBP"){
        euro=1.12;
        rupee=101.68;
        dollar=1.24;
        yen=166.24;
        pound=num*1;
    }
    else{
        cout<<"Invalid Output"<<endl;
    }

    if (currency2 == "INR"){
        cout<<num<<" "<<currency1<<" in Rupees = "<<rupee;
    }

    else if(currency2 == "EUR"){
        cout<<num<<" "<<currency1<<" in Euro = "<<euro;
    }
    else if (currency2 == "GBP"){
        cout<<num<<" "<<currency1<<" in Pounds = "<<pound;
    }
    else if(currency2 == "USD"){
        cout<<num<<" "<<currency1<<" in Dollars = "<<dollar;
    }
    else if(currency2=="YEN"){
        cout<<num<<" "<<currency1<<" in Yens = "<<yen;
    }
    else{
        cout<<"That's An Invalid Input! Please Try Again.";
    }}
    
};
class Distance{
    public:
    string dis1,dis2;
    double dis,km,metre,miles;
    int getdistance(){
        cout<<"Enter the Distance you want to convert.\n";
        cout<<"Enter KM for kilometre, MTR for metre, MLS for miles : ";
        cin>>dis1;
        cout<<"Enter distance : ";
        cin>>dis;
        if(dis1=="KM"){
            dis=km;
        }
        else if(dis1=="MTR"){
            dis=metre;
        }
        else if(dis1=="MLS"){
            dis=miles;
        }
    }
    int changes(){
        
    }
};
int main(){
    string typc;
    cout<<"Hello!";
    cout<<"What do you want to Convert ?\n";
    cout<<"Enter CUR for Currency, DIS for Distance, TMC for Time : ";
    cin>>typc;
    if (typc=="CUR"){
        Currency C1;
        C1.getcurrency1();
        C1.operation();
    }
    else if(typc=="DIS"){
        cout<<"Yet to work on :)";
    }
    else if(typc=="TMC"){
        cout<<"Yet to work on :)";
    }
    else{
        cout<<"INVALID INPUT";
    }

}
