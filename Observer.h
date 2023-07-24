//
// Created by daiji on 24/07/2023.
//

#ifndef LAB_SHOPPINGLIST_OBSERVER_H
#define LAB_SHOPPINGLIST_OBSERVER_H
class Observer {
public:
    virtual void update()=0;
    virtual ~Observer() {};
};
#endif //LAB_SHOPPINGLIST_OBSERVER_H
