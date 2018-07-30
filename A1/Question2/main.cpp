#include <QCoreApplication>
#include <QString>
#include <QStringList>
#include "loyaltycard.h"
#include <QTextStream>

QTextStream cin(stdin);
QTextStream cout(stdout);
/*
int CardNum, QString custName, QString cellNum, QStringList custAddress
*/
int main(int argc, char *argv[])
{
    QString name,cardNum, phone, strAddress1,strAddress2,strAddress3,strAddress4,
            strAmount, strOutPut,
            strPurchase = "y";
    QStringList address;
    LoyaltyCard loyalty;

    QCoreApplication a(argc, argv);
    cout << "\t\t\t--Customer Loyalty Card Application --" << endl;

    cout << "Customer name: "
         << endl;
    name = cin.readLine();
    cout << "Cell Number:"
         << endl;
    cin >> phone;
    cout << "Address Line 1:" << endl;
    cin >> strAddress1;

    cout << "Address City:" << endl;
    cin >> strAddress2;


    cout << "Address Postal Code:" << endl;
    cin >> strAddress3;


    cout << "Address Province:" << endl;
    cin >> strAddress4;


    cout << "Card number:" << endl;
    cin >> cardNum;
    address.append(strAddress1);
    address.append(strAddress2);
    address.append(strAddress3);
    address.append(strAddress4);
    //Load Customer details:
    loyalty.setDetails(cardNum.toInt(), name, phone, address);
    cout << "\t\t-- Pruchase Details --" << endl;
    do{
        cout << "\nEnter purchase amount:" << endl;
        cin >> strAmount;
        loyalty.purchase(strAmount.toDouble());
        cout << "Capture another purchase? [y/n]:" << endl;
        cin >> strPurchase;
    }while(strPurchase == "y");

    cout << "\n\n\t\t-- Display Customer Details --" << endl;
    cout << "Include labels? [y/n]:" << endl;
    cin >> strPurchase;

    bool labels = strPurchase == "y";
    strOutPut = loyalty.toString(labels);
    cout << strOutPut << endl;

    cout << "Press <<Enter>> to exit." << endl;
    return 0;
}
