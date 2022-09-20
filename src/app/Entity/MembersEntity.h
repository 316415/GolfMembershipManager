#ifndef MEMBERSENTITY_H
#define MEMBERSENTITY_H

#pragma once
#include <vector>
#include <iostream>
#include "MemberInfo.h"

class MembersEntity
{
public:
    MembersEntity();
    virtual ~MembersEntity();
    void loadMembersData();
    void addMemberInfo(MemberInfo member);
    void deleteMemberInfo(MemberInfo member);
    void make_DB_members_info();
    void printMemberInfo();

private:
    std::vector<MemberInfo> vecMembersList;
    MemberInfo memberInfo;
    FILE *fpDB;
};

#endif