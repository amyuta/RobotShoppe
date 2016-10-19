#ifndef SALES_ASSOCIATE_H
#define SALES_ASSOCIATE_H

#include <string>
using namespace std;

class SalesAssociate {

public:
    SalesAssociate(string sa_name, int sa_num) : name(sa_name), number(sa_num) {}

    void list_all_detail();
    
private:
    string name;
    int number;

};

#endif // SALES_ASSOCIATE_H
