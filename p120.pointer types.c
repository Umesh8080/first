//NULL pointer
#include<stdio.h>
int main()
{
    int *ptr=NULL;
    printf("%d",ptr);
}
//wild pointer
int main()
{
	int *p; /* wild pointer */

	int x = 10;

	// p is not a wild pointer now
	p = &x;

	return 0;
}

//void pointer
#include <stdlib.h>
int main()
{
	int x = 4;
	float y = 5.5;

	// A void pointer
	void* ptr;
	ptr = &x;

	// (int*)ptr - does type casting of void
	// *((int*)ptr) dereferences the typecasted
	// void pointer variable.
	printf("Integer variable is = %d", *((int*)ptr));

	// void pointer is now float
	ptr = &y;
	printf("\nFloat variable is = %f", *((float*)ptr));

	return 0;
}

//wild pointer
// Deallocating a memory pointed by ptr causes
// dangling pointer

#include <cstdlib>
#include <iostream>

int main()
{
	int* ptr = (int *)malloc(sizeof(int));

	// After below free call, ptr becomes a
	// dangling pointer
	free(ptr);

	// No more dangling pointer
	ptr = NULL;
}
