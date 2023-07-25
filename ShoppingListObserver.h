//
// Created by daiji on 25/07/2023.
//

#ifndef LAB_SHOPPINGLIST_SHOPPINGLISTOBSERVER_H
#define LAB_SHOPPINGLIST_SHOPPINGLISTOBSERVER_H


#include "Observer.h"
#include "ShoppingList.h"

class ShoppingListObserver: public Observer {
public:
    ShoppingListObserver(ShoppingList* s);
    void update() override;
    void printalist();
    ~ShoppingListObserver() override;
private:
    ShoppingList* subject;
    float total;
};


#endif //LAB_SHOPPINGLIST_SHOPPINGLISTOBSERVER_H
