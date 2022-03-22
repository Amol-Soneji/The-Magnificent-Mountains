#ifndef INTERNAL_USER_MODIFICATION_H
#define INTERNAL_USER_MODIFICATION_H

#include <userCharacter.h>
#include <inventory.h>
#include <user.h>

class InternalUserModification
{
    public:
    InternalUserModification(User* userPointer, Inventory* inventoryPointer, UserCharacter* usrCharPointer) : userPointer(userPointer), inventoryPointer(inventoryPointer), usrCharPointer(usrCharPointer) {}

    private:
        User* userPointer;
        Inventory* inventoryPointer;
        UserCharacter* usrCharPointer;
};

#endif // !INTERNAL_USER_MODIFICATION_H

