//
// Created by daiji on 24/07/2023.
//

#include "Object.h"
Object::Object(const std::string &n, const std::string &t, float up, float q){
    name=n;
    type=t;
    unitprice=up;
    quantity=q;
    price=up*q;
}



float Object::getprice() const {
    return this->price;
}

void Object::setquantity(const float &q) {
    quantity=q;
}

std::string Object::getname() const {
    return this->name;
}

float Object::getquantity() const {
    return this->quantity;
}

float Object::getunitprice() const {
    return this->unitprice;
}

void Object::setprice() {
    price=unitprice*quantity;
}

std::string Object::gettype() const {
    return this->type;
}
