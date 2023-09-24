#include <string> 
using namespace std;

class Player{
    public: 
        Player();
        Player (int rank, string Lname, string Fname, string country, int points);
        string getLastName() const;
        string getFirstName() const;
        int getRank() const;
        string getCountry() const;
        int getPoints() const;
        void setRank(int);
        void setLastName(string);
        void setFirstName(string);
        void setCountry(string);
        void setPoints(int);
        void display() const;

    private: 
        string mfirstName;
        string mlastName;
        int mRank;
        string mCountry;
        int mPoints;
        
};