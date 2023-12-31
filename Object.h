//
// Created by daiji on 24/07/2023.
//

#ifndef LAB_SHOPPINGLIST_OBJECT_H
#define LAB_SHOPPINGLIST_OBJECT_H


#include <string>

class Object {
public:
    Object(const std::string& n, const std::string& t, float up, float q);
    Object(){}
    ~Object(){}

    float getprice()const;
    void setprice();
    float getunitprice() const;
    float getquantity()const;
    std::string getname()const;
    std::string gettype()const;
    void setquantity(const float& q);
private:
    std::string name;
    std::string type;
    float unitprice;
    float quantity;
    float price;
};


#endif //LAB_SHOPPINGLIST_OBJECT_H
