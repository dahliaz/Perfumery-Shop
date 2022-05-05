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

//WARNING! U CAN SIMPLIFY THIS INTO JUST 2 CLASSES PAYMENT & MEMBERCHECK

class MemberCheck: public Perfume {
 private:
 char m; // <-- int -> char 
 
 public:
 Member(){} // <-- i don't see a class called Member unless u mean MemberCheck 
    Member(char m)//changed m from int to char
    {
        member = m;
    }
 
    // func Member() and no need to input request if constructor is expecting an input from main
 
 void Member(void){
    do{
        switch(member)
    case 'Y':
        cout << "Welcome Member!\n You are eligible for a 10% members'only discount!" << endl;
        break;
    case 'N':
        cout << "You are not a Member.\n Become  a member and get a 10% discount on your purchases!" << endl;
        break;
    default:
        cout << "Invalid character is entered.Please try again." << endl;
        }while (member != 'Y' || member != 'N');//loop to repeat once invalid char is entered
 }

        //end switch to choose member status
};

class Payment:public Perfume, public MemberCheck{ 
private:
    
    /*char option = 'o'; <-- total unecessary*/
    double base = 1.5, sizePrice=0.0, total=0.0;

public:
 
 void sizeCost(){
    if(size == 'S')
        sizePrice = 25.00;
    else if(size == 'M')
        sizePrice = 75.00;
    else if(size == 'L')
        sizePrice = 125.00;
//price assigned to size
 }

void totalCalc(){ //& i've just embedded the prices into the formula 
total = (5*peach) + (7*rose) + (3.7*vanilla) + (2.4*musk) + (2.7*sandalwood) + base; //price including scents calculated

total += sizePrice; //price including size calculated

total *= bottles; //total price of one bottle multiplied by how many bottles bought
 
 }

double Discount(){
    if(member = 'Y')
        return Total*0.9;
    else
        return Total;
//if member then discount applicable
}              

};





