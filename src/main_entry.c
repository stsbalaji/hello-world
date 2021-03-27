#include "app.h"

int main()
{
    int testNo;
    printf("Enter no of testcases:");
    scanf("%d", &testNo); 

    while(testNo != 0)
    {
        app_entry();
        testNo--;
    }
}
