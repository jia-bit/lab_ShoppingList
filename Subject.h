//
// Created by daiji on 24/07/2023.
//

#ifndef LAB_SHOPPINGLIST_SUBJECT_H
#define LAB_SHOPPINGLIST_SUBJECT_H
class Subject{
public:
    virtual void notify()=0;
    virtual void subscribe(Observer* o)=0;
    virtual void unsubscribe(Observer* o)=0;
    virtual ~Subject(){}
};
#endif //LAB_SHOPPINGLIST_SUBJECT_H
