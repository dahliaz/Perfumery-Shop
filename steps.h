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
#include <string>

using namespace std;

Perfume:: Perfume() { //initialize variables
    size = '';
    peach = 0;
    rose = 0;
    vanilla = 0;
    musk = 0;
    sandalwood = 0;
}

void Brewery:: scentMenu() { //to help users navigate for switch..case
    cout << "Make your own perfume...\n\n";
    cout << "+-----+------------+---------+\n";
    cout << "| No. | Scent      | Price   |\n";
    cout << "+-----+------------+---------+\n";
    cout << "| 1   | Peach      | RM 5.00 |\n";
    cout << "+-----+------------+---------+\n";
    cout << "| 2   | Rose       | RM 7.00 |\n";
    cout << "+-----+------------+---------+\n";
    cout << "| 3   | Vanilla    | RM 3.70 |\n";
    cout << "+-----+------------+---------+\n";
    cout << "| 4   | Musk       | RM 2.40 |\n";
    cout << "+-----+------------+---------+\n";
    cout << "| 5   | Sandalwood | RM 2.70 |\n";
    cout << "+-----+------------+---------+\n\n";
    cout << "\nNote: base is included.\n";
}

void Brewery:: getScents(int i) { //to set value for variables 
    cout << "Enter the number for the scent you desire : ";
    cin >> drops;

    switch (drops){
        case 1:
            peach += 1;
            break;
        case 2:
            rose += 1;
            break;
        case 3:
            vanilla += 1;
            break;
        case 4:
            musk += 1;
            break;
        case 5:
            sandalwood += 1;
            break;
        default:
            cout << "Invalid input!\n";
            if (i == 0)
                i = 0;
            else
                i -= 1;
            break;
    }
}

int Brewery:: scentAmount() { //get number of scents use (max 3)
    while (1){
        cout << "How many scents you want to buy? (MAXIMUM 3 scents) : \n";
        cin >> scents;
        if (scents <= 3)
            return scents;
        else
            cout << "Please Enter A Scent Amount Less Than 3!\n" << endl;
    }
}

char Brewery:: uniqueChoice() { //determine wether to loop or not
    cout << "---------------------------------------------------------\n";

    while (1){
        cout << "Do you want every bottle to be unique? (Y/N) : " << endl;
        cin >> unique;

        if (unique == 'Y' || unique == 'N')
            return unique;
        else
            cout << "Please Enter A Valid Value! \n" << endl;
    }
}

void Brewery:: display() { // to welcome users
    cout << setw(43) << "***Welcome to our perfumery***" << endl;
    cout << "---------------------------------------------------------\n";
    cout << setw(37) << "Bloom Scents Menu" << endl;
    cout << "---------------------------------------------------------\n";
}

int Brewery:: bottleChoice() { // get number of bottles
    while (1){
        cout << "How many perfume you want to buy? : ";
        cin >> bottles;

        if (bottles <= 30)
            return bottles;
        else
            cout << "Sorry we can only sell 30 bottles in a day!\n";
    }
}

void Brewery:: scentChoice() { //to shop for a perfume
    unique = uniqueChoice();
    cout << "---------------------------------------------------------\n";
    if (unique == 'Y')
    {
        for (int i = 0; i < bottles; i++)
        {
            cout << "Bottle " << i + 1 << endl;
            scents = scentAmount();
            cout << "---------------------------------------------------------\n";
            scentMenu();

            for (int i = 0; i < scents; i++)
            {
                getScents(i);
            }
        }
    }
    else if (unique == 'N')
    {
        scents = scentAmount();
        cout << "---------------------------------------------------------\n";
        scentMenu();

        for (int i = 0; i < scents; i++)
        {
            getScents(i);
        }
    }
}

char Brewery:: sizeChoice() { // get size of bottles
    while (1){
        cout << "---------------------------------------------------------\n";
        cout << "The size of the bootle..\nS: Small(30ml)\nM: Medium(100)\nL: "
                "Large(200)";

        cout << "\n\nEnter your prefered size: ";
        cin >> size;

        if (size == 'S' || size == 'M' || size == 'L')
            return size;
        else
            cout << "Please Enter A Valid Size!\n";
    }
    cout << "---------------------------------------------------------\n";
}

Payment:: Payment(char m) { // construct of payment 
    member = m;
}

void Payment:: Member() { //check if you're a member or not
    while (member != 'N' && member != 'Y') {
        cout << "\nInvalid character is entered.Please try again." << endl;
        cout << "---------------------------------------------------------\n";
        cout << "Are you a member? (Y/N): ";
        cin >> member;
    }
    if (member == 'Y') {
        cout << "\nWelcome Member!\nYou are eligible for a 10% members'only discount!" << endl;
        cout << "---------------------------------------------------------\n";
    }
    else if (member == 'N') {
        cout << "\nYou are not a Member.\nBecome  a member and get a 10% discount on your purchases!" << endl;
        cout << "---------------------------------------------------------\n";
    }
}

void Payment:: sizeCost() { //find cost of bottle and how much vol to multiply with base
    if(size == 'S') {
        sizeBottle = 25.00;
        vol = 1;
    }
    else if(size == 'M') {
        sizeBottle = 75.00;
        vol = 3;
    }
    else {
        sizeBottle = 125.00;
        vol = 5;
    }
}

double Payment:: totalCalc() { //To calculate total price
    total = (5*peach) + (7*rose) + (3.7*vanilla) + (2.4*musk) + (2.7*sandalwood) + (base*vol) + sizePrice; 
    total *= bottles; 

    if(member = 'Y')
        return total*0.9;
    else
        return total;
}

void Payment:: NonUnique() { //Bulk Order

    cout << "Name: " << name << endl;
    cout << "No. of Bottles: " << bottles << endl;
    cout << "Scents: Peach\t\tX" << peach << endl;
    cout << "\tRose\t\tX" << rose << endl;
    cout << "\tVanilla\t\tX" << vanilla << endl;
    cout << "\tSandalwood\tX" << sandalwood << endl;
    cout << "\tMusk\t\tX" << musk << endl;
    cout << "Total Price: RM" << setprecision(2) << total << endl;

}

void Payment:: Unique () { //None bulk order
    cout << "Name: " << name << endl;
    cout << "No. of Bottles: " << bottles << endl;
    for (int i = 0; i < bottles; i++) {
        cout << "Bottle #" << i + 1; 
        cout << "Scents: Peach\t\tX" << peach << endl;
        cout << "\tRose\t\tX" << rose << endl;
        cout << "\tVanilla\t\tX" << vanilla << endl;
        cout << "\tSandalwood\tX" << sandalwood << endl;
        cout << "\tMusk\t\tX" << musk << endl;
    }
    cout << "Total Price: RM" << setprecision(2) << total << endl;
}

void Invoice () { // print invoice call
    if (unique == 'Y')
        Unique();
    else 
        NonUnique();
}