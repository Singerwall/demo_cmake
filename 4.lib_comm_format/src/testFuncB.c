#include <stdio.h>
#include "testFuncA.h"

void funcB(int data)
{
	printf("%s, %d, %s\n",__FILE__,__LINE__,__DATE__ );
	printf("data is %d\n", data);
	funcA(data);
}
