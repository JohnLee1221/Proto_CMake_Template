#include "test.pb.h"

int main()
{
    test::demo msg;
    msg.set_num(555);
    msg.add_strs("Hello");
    msg.add_strs("hahaha");

    msg.PrintDebugString();
}