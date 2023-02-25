//storing value in little endian
/*#include <stdio.h>
int main(void)
{
 unsigned int value = 0x11223344;
 char *r ;//= (char *) &value;
 r=&value;
 for(int i=0; i<4; i++)
    {
 printf("Address of 0x%x = %d \n", r[i], &r[i]);
 }
}
*/
//finding little or big endian
#include <stdio.h>

int main(void)
{
    unsigned int value = 0x9;
    char *r;// = (char *) &value;
     r=&value;
    if (*r == 9)
        printf("Your system is Little Endian\n");
    else
        printf("Your system is Big Endian\n");
    //return 0;
}
