#include<iostream>
#include<string>
using namespace std;
class Distance{
    public:
    double n,km,mtr,miles;
    Distance(){
        cout<<"Distance conversion :)"<<endl;
    }
    void Km(double n){
        mtr=n*1000;
        miles=n/1.609344;
        km=n*1;
    }
    void Mtr(double n){
        km=n/1000;
        miles=n/1609.344;
        mtr=n*1;
    }
    void Miles(double n){
        km=n*1.609344;
        mtr=n*1609.344;
        miles=n*1;
    }
};
int main(){
    float d;
    string Distance1,Distance2;
    Distance d1;
        cout<<"Enter the Distance : ";
        cin>>d;
        cout<<"Enter the unit you want to convert."<<endl;
        cout<<"Use KMS for Kilometers, MTR for meters, MLS for Miles : ";
        cin>>Distance1;
        cout<<"Enter the unit in which you want to convert."<<endl;
        cout<<"Use KMS for Kilometers, MTR for meters, MLS for Miles : ";
        cin>>Distance2;
        while ((Distance1!="KMS"||Distance1!="MTR"||Distance1!="MLS")&&(Distance2!="KMS"||Distance2!="MTR"||Distance2!="MLS")){
            cout<<"INVALID INPUTS"<<endl;
            break;
        }
        if (Distance1 == "KMS"){
            d1.Km(d);
        }
        else if (Distance1 == "MTR"){
            d1.Mtr(d);
        }
        else if(Distance1=="MLS"){
            d1.Miles(d);
        }
        if (Distance2 == "KMS"){
            cout<<"Distance in kilometers is "<<d1.km;
        }
        else if (Distance2 == "MTR"){
            cout<<"Distance in meters is "<<d1.mtr;
        }
        else if(Distance2=="MLS"){
            cout<<"Distance in miles is "<<d1.miles;
        }
    }