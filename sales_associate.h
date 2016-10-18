#ifndef SALES_ASSOCIATE_H
#define SALES_ASSOCIATE_H

class SalesAssociate {

public:
    SalesAssociate(string sa_name, int sa_num) : name(sa_name), number(sa_num) {}

    string get_sa_name();
    int get_sa_number();
    //Order order;
private:
    string name;
    int number;

};

#endif // SALES_ASSOCIATE_H
