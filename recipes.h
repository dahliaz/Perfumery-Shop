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
	protected:
		int bottles, scents, drops;
		char unique, size;
    public:

        void display(){
            cout << setw(43) << "***Welcome to our perfumery***"<<endl;
            cout <<"---------------------------------------------------------\n";
            cout << setw (37) << "Bloom Scents Menu"<<endl;
            cout <<"---------------------------------------------------------\n";
            cout << "\t\tPeach\t\t RM5.00\n\t\tRose\t\t RM7.00\n\t\tVanilla\t\t RM3.70\n\t\tMusk\t\t RM2.40\n\t\tSandalwood\t RM2.70\n";
            cout <<"---------------------------------------------------------\n";
        }
        
        int bottleChoice() {
        	while(1){
        		cout << "How many perfume you want to buy? " << endl;
	            cin >> bottles;
	            cout <<"---------------------------------------------------------\n";
	            if (bottles <= 30)
	            	return bottles;
	            else
	            	cout << "Sorry we only can sell 30 bottles in a day";
			}   
		}
		
		char uniqueChoice(){
			while(1){
				cout << "Do you want every bottle to be unique? (Y/N)" << endl;
				cin >> uniqueChoice;
				if (unique == 'Y' || unique == 'N')
					return unique;
				else
					cout << "Please Enter A Valid Value" << endl;
			}
		}
		
		int scentChoice() {
			
			unique = uniqueChoice();
			
			if (unique == 'Y'){
				for(int i = 0; i < bottles; i++){
					cout << "Bottle " << bottles + 1 << endl;
					scents = scentAmount();
	                cout <<"---------------------------------------------------------\n";
                    scentMenu();
                    for(int i = 0; i < scents; i++){
                    	cout << "Enter the number for the scent you desire: ";
						cin >> drops;
						switch (drops) {
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
								cout << "Invalid input";
								i -= 1;
						}
                    }
	            }
			}
			else if (unique == 'N'){
				cout << "Bottle " << bottles + 1 << endl;
				scents = scentAmount();
                cout <<"---------------------------------------------------------\n";
                scentMenu();
                for(int i = 0; i < scents; i++){ 
					cout << "Enter the number for the scent you desire: ";
					cin >> drops;
                	switch (drops) {
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
							cout << "Invalid input";
							i -= 1;
					}
                }
			}
		}
		
		void scentMenu(){
			cout << "Make your own perfume...\n\n";
            cout << "+-----+------------+\n";
			cout << "| No. | Scent      |\n";
			cout << "+-----+------------+\n";
			cout << "| 1   | Peach      |\n";
			cout << "+-----+------------+\n";
			cout << "| 2   | Rose       |\n";
			cout << "+-----+------------+\n";
			cout << "| 3   | Vanilla    |\n";
			cout << "+-----+------------+\n";
			cout << "| 4   | Musk       |\n";
			cout << "+-----+------------+\n";
			cout << "| 5   | Sandalwood |\n";
			cout << "+-----+------------+\n";
		}
		
		int scentAmount(){
			while(1){
				cout << "How many scents you want to buy? (MAXIMUM 3 scents)\n";
	        	cin >> scents;
	        	if (scents <= 3)
	        		return scents;
	        	else
	        		cout << "Please Enter A Scent Amount Less Than 3" << endl;
			}
			
		}
			
		char sizeChoice() {
			while(1){
				cout << "-----------------------------------------------------------------------\n";
                cout << "The size of the bootle..\nS: Small(30ml)\nM: Medium(100)\nL: Large(200)";
                cin >> size;
                if (size == 'S' || size == 'M' || size == 'L')
                	return size;
                else
                	cout << "Please Enter A Valid Size"
            }
		}
		
	}

};
