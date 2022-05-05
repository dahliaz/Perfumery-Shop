/******************************************************************************************************************************
 Group Members:
 WAN MUHAMMAD LUQMAN BIN WAN AZINUDDIN     | SW01081339     | 03A
 AISYA BATRISYIA BINTI AZLEY               | SW01081523     | 03A  
 NUR ADILAH BINTI ZAINAL ABIDIN            | SW01081031     | 03B
 ALZAHRANI YARA KHALID M                   | CS01080951     | 03A
 ALMANSARI AWS ABDULRAHMAN AHMED           | CS01080941     | 03A
 *****************************************************************************************************************************/
#include "recipes.h"
#include <iomanip>
#include <iostream>

using namespace std;

class Payment:public Perfume{
private:
    int member=0;
    char option='o';
    double base=1.5, sizePrice=0.0;

public:
    Member(){}
    Member(int m, char option){

        m=member;
        opt=option;
    }

    Amount():pea{5}, rs{7}, van{3.7},mu{2.4}, sw{2.7}

};


class MemberCheck:public Payment, public Perfume{
    cout<<"Are you a member (Y/N)?: ";
    cin>>opt;

    do{
        switch(opt)
    case 'Y':
        cout<<"Welcome Member!\n You are eligible for a 10% members'only discount!"<<endl;
        m=1;
        break;
    case 'N':
        cout<<"You are not a Member.\n Become  a member and get a 10% discount on your purchases!"<<endl;
        m=-1;
        break;
    default:
        cout<<"Invalid character is entered.Please try again."<<endl;
        }while(opt !='Y' || opt !='N');//loop to repeat once invalid char is entered

//end switch to choose member status

};

class Amount:public Payment, public Perfume{
    if(size=='S')
        sizePrice=25.00;
    else if(size=='M')
        sizePrice=75.00;
    else if(size=='L')
        sizePrice=125.00;
//price assigned to size
 
Total= peach+ rose+vanilla+musk+sandalwood+base; //price including scents calculated

Total+=sizePrice; //price including size calculated

Total *= bottles; //total price of one bottle multiplied by how many bottles bought

    if(m=1)
        return Total*0.9;
    else if (m=-1)
        return Total;

//if member then discount applicable
};

