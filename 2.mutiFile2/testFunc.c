#include <stdio.h>
#include "testFunc.h"

void func(int data)
{
	printf("%s, %d, %s\n",__FILE__,__LINE__,__DATE__ );
	printf("data is %d\n", data);
}
