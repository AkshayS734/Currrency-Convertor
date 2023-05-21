#include <iostream>
#include <string>
using namespace std;

class Currency {
public:
    double num, pound, euro, rupee, yen, dollar;

    Currency() {
        cout << "Currency conversion :)" << endl;
    }

    void Dollar(double num) {
        pound = num * 0.80;
        euro = num * 0.90;
        rupee = num * 81.85;
        yen = num * 133.82;
        dollar = num * 1;
    }

    void Pound(double num) {
        euro = 1.12;
        rupee = 101.68;
        dollar = 1.24;
        yen = 166.24;
        pound = num * 1;
    }

    void Rupee(double num) {
        pound = num * 0.0098;
        euro = num * 0.011;
        dollar = num * 0.012;
        yen = num * 1.65;
        rupee = num * 1;
    }

    void Euro(double num) {
        pound = num * 0.89;
        rupee = num * 90.87;
        dollar = num * 1.11;
        yen = num * 148.60;
        euro = num * 1;
    }

    void Yen(double num) {
        pound = num * 0.0060;
        euro = num * 0.0067;
        rupee = num * 0.61;
        dollar = num * 0.0075;
        yen = num * 1;
    }
};

class Distance {
public:
    double n;
    double km, mtr, miles;

    Distance() {
        cout << "Distance conversion :)" << endl;
    }

    void Km(double n) {
        mtr = n * 1000;
        miles = n / 1.609344;
        km = n * 1;
    }

    void Mtr(double n) {
        km = n / 1000;
        miles = n / 1609.344;
        mtr = n * 1;
    }

    void Miles(double n) {
        km = n * 1.609344;
        mtr = n * 1609.344;
        miles = n * 1;
    }
};

int main() {
    double x;
    float d;
    string c;
    string task, Currency1, Currency2, Distance1, Distance2;
    cout << "What do you want to do?" << endl;
    cout << "Enter CUR for Currency conversion, DIS for Distance conversion: ";
    cin >> task;

    try {
        if (task != "CUR" && task != "cur" && task != "Cur" && task != "DIS" && task != "dis" && task != "Dis") {
            throw "INVALID INPUT!";
        }

        if (task == "CUR" || task == "cur" || task == "Cur") {
            Currency c1;
            cout << "Enter the number: ";
            cin >> x;

            cout << "Enter the currency you want to convert." << endl;
            cout << "Use USD for Dollar, INR for Rupee, EUR for Euro, GBP for Pound, YEN for Yen: ";
            cin >> Currency1;

            if (Currency1 == "USD") {
                c1.Dollar(x);
            }
            else if (Currency1 == "GBP") {
                c1.Pound(x);
            }
            else if (Currency1 == "INR") {
                c1.Rupee(x);
            }
            else if (Currency1 == "EUR") {
                c1.Euro(x);
            }
            else if (Currency1 == "YEN") {
                c1.Yen(x);
            }
            else {
                throw "INVALID INPUT!";
            }

            cout << "Enter the currency in which you want to convert." << endl;
            cout << "Use USD for Dollar, INR for Rupee, EUR for Euro, GBP for Pound, YEN for Yen: ";
            cin >> Currency2;

            if (Currency2 == "USD") {
                cout << "The value in Dollars is " << c1.dollar<<endl;
            }
            else if (Currency2 == "GBP") {
                cout << "The value in Pounds is " << c1.pound<<endl;
            }
            else if (Currency2 == "INR") {
                cout << "The value in Rupees is " << c1.rupee<<endl;
            }
            else if (Currency2 == "EUR") {
                cout << "The value in Euros is " << c1.euro<<endl;
            }
            else if (Currency2 == "YEN") {
                cout << "The value in Yens is " << c1.yen<<endl;
            }
            else {
                throw "INVALID INPUT!";
            }
        }
        else if (task == "DIS" || task == "dis" || task == "Dis") {
            Distance d1;
            cout << "Enter the Distance: ";
            cin >> d;

            cout << "Enter the unit you want to convert." << endl;
            cout << "Use KMS for Kilometers, MTR for meters, MLS for Miles: ";
            cin >> Distance1;

            if (Distance1 == "KMS") {
                d1.Km(d);
            }
            else if (Distance1 == "MTR") {
                d1.Mtr(d);
            }
            else if (Distance1 == "MLS") {
                d1.Miles(d);
            }
            else {
                throw "INVALID INPUT!";
            }

            cout << "Enter the unit in which you want to convert." << endl;
            cout << "Use KMS for Kilometers, MTR for meters, MLS for Miles: ";
            cin >> Distance2;

            if (Distance2 == "KMS") {
                cout << "Distance in kilometers is " << d1.km<<endl;
            }
            else if (Distance2 == "MTR") {
                cout << "Distance in meters is " << d1.mtr<<endl;
            }
            else if (Distance2 == "MLS") {
                cout << "Distance in miles is " << d1.miles<<endl;
            }
            else {
                throw "INVALID INPUT!";
            }
        }
    }
    catch (const char* errorMsg) {
        cout << errorMsg << endl;
    }

    cout << "Do you want to continue (y/n): ";
    cin >> c;

    if (c == "y") {
        main();
    }
    else {
        exit(0);
    }

    return 0;
}
