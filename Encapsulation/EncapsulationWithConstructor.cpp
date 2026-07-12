#include<iostream>
using namespace std;


class Database{
    private:
    string Connectionstring;

    public:
    Database(string con){
        Connectionstring = con;
        //connect to Database
    }
};

