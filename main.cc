#include "MemManage.h"
#include <iostream>
using namespace std;

int main()
{
    int* a = static_cast<int*>(
        kMalloc(sizeof(int))
    );

    *a = 2233;
    cout << *a << endl;
    kFree(a);

    int* list = static_cast<int*>(
        kMalloc(sizeof(int) * 4096)
    );

    for (int i = 0; i < 2233; i++)
        list[i] = i;
    kFree(list);
}