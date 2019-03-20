//
// Created by jri24 on 3/20/2019.
//

#ifndef LISTINTERFACE_LISTINTERFACE_H
#define LISTINTERFACE_LISTINTERFACE_H



template <typename ItemType>
class ListInterface {
public:
    virtual bool isEmptyy() const = 0;

    virtual int getLength();

    virtual bool insert(const int position, const ItemType& item) = 0;

//remove
//getItem
//replace




};



#endif //LISTINTERFACE_LISTINTERFACE_H
