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
        int peach, rose, vanilla, musk, sandalwood; //variables needed to multiply with prices of scents to get total price

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

        	void display(){ //display welcome menu
            	cout << setw(43) << "***Welcome to our perfumery***"<<endl;
            	cout <<"---------------------------------------------------------\n";
            	cout << setw (37) << "Bloom Scents Menu"<<endl;
            	cout <<"---------------------------------------------------------\n";
        	}
        
        	int bottleChoice() { //get number of bottles
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
		
		char uniqueChoice(){ //do they want multiple bottles of the same or different scents?
			while(1){
				cout << "Do you want every bottle to be unique? (Y/N)" << endl;
				cin >> uniqueChoice;
				if (unique == 'Y' || unique == 'N')
					return unique;
				else
					cout << "Please Enter A Valid Value" << endl;
			}
		}
		
		int scentChoice() { //get 3 scents they want, the switch case will help us to find the total payment (excl. member discount)
			unique = uniqueChoice();
			if (unique == 'Y'){
				for(int i = 0; i < bottles; i++){
					cout << "Bottle " << i + 1 << endl;
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
								if (i == 0)
									i = 0;
								else 
									i -= 1;
								break;
						}
                    			}
	            		}
			}
			else if (unique == 'N'){
				cout << "All " << bottles << "bottles" << endl;
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
							if (i == 0)
								i = 0;
							else 
								i -= 1;
							break;
						
                			}
				}
			}
		}
		void scentMenu(){ // for users to input a number to enable switch case function --> should be utility function
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
			cout << "+-----+------------+---------+\n";
		}
		
		int scentAmount(){ //get amount scents they want
			while(1){
				cout << "How many scents you want to buy? (MAXIMUM 3 scents)\n";
	        		cin >> scents;
	        		if (scents <= 3)
	        			return scents;
	        		else
	        			cout << "Please Enter A Scent Amount Less Than 3" << endl;
			}
			
		}
			
		char sizeChoice() { // get size of bottle
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

};
