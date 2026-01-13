#include<Stdio.h>
int main(){
    char kdbc[6] = {'a','b','c','d','e','f','g'};
    for (int i = 0; i < 6; i++)
    {
        if (kdbc[i] == 'd')
        {
            printf("Found d at %d\n",i);
        }
    }
    
}
