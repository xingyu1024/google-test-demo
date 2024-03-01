//
// Created by maxin on 2024/3/1.
//

#ifndef MOCKUSER_H
#define MOCKUSER_H
#include "User.h"
#include <gmock/gmock.h>
class MockUser: public User
{
public:
    MOCK_METHOD(int, get_age, (), (override));
};
#endif //MOCKUSER_H
