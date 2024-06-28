#ifndef DATABASE_H
#define DATABASE_H
#include <fstream>
#include <cstring>
#include <iostream>
#include "student.h"
#include "personal.h"

template<class T>
class Database
{
    public:
        Database();
        void run();

    protected:


    private:
        fstream database;
        char fName[20];
        ostream& print(ostream&);
        void add(T&);
        bool find(const T&);
        void modify(const T&) ;
        friend ostream& operator<<(ostream& out, Database& db) {
            return db.print(out);
        }
};

#endif // DATABASE_H
