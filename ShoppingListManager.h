//
// Created by daiji on 25/07/2023.
//

#ifndef LAB_SHOPPINGLIST_SHOPPINGLISTMANAGER_H
#define LAB_SHOPPINGLIST_SHOPPINGLISTMANAGER_H


#include <map>
#include "Observer.h"
#include "Subject.h"
#include "ShoppingList.h"

class ShoppingListManager: public Subject {
public:
    ShoppingListManager();
    void notify() override;
    void subscribe(Observer* o) override;
    void unsubscribe(Observer* o) override;

    void insertShoppinglist(const ShoppingList& newlist);
    void deleteShoppinglist(const std::string& listname);
    void printlists();
    int getlistnumber()const;
    void setlistnumber(int n);

private:
    std::list<Observer*> observers;
    std::map<std::string, ShoppingList> lists;
    int listnumber;


};


#endif //LAB_SHOPPINGLIST_SHOPPINGLISTMANAGER_H
