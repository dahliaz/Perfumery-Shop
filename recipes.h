/******************************************************************************************************************************
 Group Members:
 WAN MUHAMMAD LUQMAN BIN WAN AZINUDDIN     | SW01081339     | 03A
 AISYA BATRISYIA BINTI AZLEY               | SW01081523     | 03A
 NUR ADILAH BINTI ZAINAL ABIDIN            | SW01081031     | 03B
 ALZAHRANI YARA KHALID M                   | CS01080951     | 03A
 ALMANSARI AWS ABDULRAHMAN AHMED           | CS01080941     | 03A
 *****************************************************************************************************************************/

class Perfume { //Parent class
    private:
        char size;
        int peach, rose, vanilla, musk, sandalwood, bottles;
        double total;

        virtual void display () = 0;

    public:
        Perfume ();
};

class Brewery: public Perfume { //To make perfumes
    private:
        int scents, drops;
        char unique;

        void scentMenu();
        void getScents(int i);
        int scentAmount();
        char uniqueChoice();
    public:
        void display();
        int bottleChoice();
        void scentChoice();
        char sizeChoice();
};

class Payment: public Perfume { //For transaction 
    private:
        char member;
        int vol;
        double sizeBottle, base = 1.5;
        string name, address;
        
        void Unique(); 
        void NonUnique();
    
    public:
        Payment();
        void Member();
        void sizeCost();
        void totalCalc();
        void Invoice();
};

