#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int loop(int num1, int num2, int count, int aux)
{
    if (aux == 50)
    {
        return count;
    }
    
    int restoUm = aux % num1;
    int restoDois = aux % num2;
    
    if (restoUm == 0 && restoDois == 0)
    {
        count += 1;
    }
    
    return loop(num1, num2, count, aux + 1);
}

int main() {
    int num1, num2;
    
    scanf("%d%d", &num1, &num2);
    
    int res = loop(num1, num2, 0, 1);
    
    printf("%d", res);
    
	return 0;
}