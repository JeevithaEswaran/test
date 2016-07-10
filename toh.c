#include <stdio.h>
#include<conio.h>
void towerOfHanoi(int,char,char,char);
void towerOfHanoi(int n, char frompeg, char topeg, char auxpeg)
{
    if (n == 1)
    {
        printf("\n Move disk 1 from rod %c to rod %c", fromrod, torod);
        return;
    }
    towerOfHanoi(n-1, frompeg, auxpeg, topeg);
    printf("\n Move disk %d from rod %c to rod %c", n, frompeg, topeg);
    towerOfHanoi(n-1, auxpeg, topeg, frompeg);
    getch();
}
 
int main()
{
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');  
    return 0;
}

    
