/******************************************************************************************************************************
 Group Members:
 WAN MUHAMMAD LUQMAN BIN WAN AZINUDDIN     | SW01081339     | 03A
 AISYA BATRISYIA BINTI AZLEY               | SW01081523     | 03A  
 NUR ADILAH BINTI ZAINAL ABIDIN            | SW01081031     | 03B
 ALZAHRANI YARA KHALID M                   | CS01080951     | 03A
 ALMANSARI AWS ABDULRAHMAN AHMED           | CS01080941     | 03A
 *****************************************************************************************************************************/
#include <iostream>
#include <iomanip> 
#include "potion.h"

using namespace std;

class Bloom {
    protected:
        char size;
        int peach, rose, vanilla, musk, sandalwood;

        virtual void display() = 0;
    public:
        Bloom(char s, int pea, int rs, int van, int mu, int sw) {
        size = s;
        peach = pea;
        rose = rs;
        vanilla = van;
        musk = mu;
        sandalwood = sw;
    }
};

class Shop: public Bloom {
    public:

        void display(){
            cout << setw(43) << "***Welcome to our perfumery***"<<endl;
            cout <<"---------------------------------------------------------\n";
            cout << setw (37) << "Bloom Scents Menu"<<endl;
            cout <<"---------------------------------------------------------\n";
            cout << "\t\tPeach\t\t RM5.00\n\t\tRose\t\t RM7.00\n\t\tVanilla\t\t RM3.70\n\t\tMusk\t\t RM2.40\n\t\tSandalwood\t RM2.70\n";
            cout <<"---------------------------------------------------------\n";
        }

        /*void customize(int bottles, int scents) {
            cout << "How many perfume you want to buy? " << endl;
            cin >> bottles;
            cout <<"---------------------------------------------------------\n";
            while (bottles <= 30){
                cout << "How many scents you want to buy? (MAXIMUM 3 scents)\n";
                cin>>scents;
                cout <<"---------------------------------------------------------\n";
                    if(scents<=3){
                        cout << "Make your own perfume...\nPeach\nRose\nVanilla\nMusk\nSandalwood\n";
                        for(int i=0; i<scents; i++)
                        {
                        cin>>per[i];
                        }
                    cout <<"-----------------------------------------------------------------------\n";
                        cout << "The size of the bootle..\nSmall(30ml)\nMedium(100)\nLarge(200)";
                        cin>>size;
                    }
                    else
                    cout << "Sorry we only can sell 30 bottles in a day";
            }
        }*/
};