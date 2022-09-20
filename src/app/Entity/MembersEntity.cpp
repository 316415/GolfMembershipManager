#include "MembersEntity.h"

MembersEntity::MembersEntity()
{
    fpDB = fopen("memberLists.bin", "r+");
    loadMembersData();
    printMemberInfo();
}

MembersEntity::~MembersEntity()
{

}

void MembersEntity::loadMembersData()
{
    while(fread(&memberInfo, sizeof(MemberInfo), 1, fpDB))
    {
        vecMembersList.push_back(memberInfo);
    }

}

void MembersEntity::addMemberInfo(MemberInfo member)
{
    ;
}

void MembersEntity::deleteMemberInfo(MemberInfo member)
{
    ;
}

void MembersEntity::make_DB_members_info()
{
    ;
}

void MembersEntity::printMemberInfo()
{
    printf("%04d, %s, %s, %s, %0x-%0x-%0x-%0x-%0x\n",
           vecMembersList[1000].id,
           vecMembersList[1000].name,
           vecMembersList[1000].address,
           vecMembersList[1000].phoneNumber,
           vecMembersList[1000].cardNum[0],
           vecMembersList[1000].cardNum[1],
           vecMembersList[1000].cardNum[2],
           vecMembersList[1000].cardNum[3],
           vecMembersList[1000].cardNum[4]
           );
}