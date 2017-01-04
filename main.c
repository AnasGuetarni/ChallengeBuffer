#include <stdio.h>
#include <stdlib.h>
 
void shell() {
    system("cat .passwd\n");
}
 
void sup() {
    printf("Shure ?!\n");
}
 
main()
{ 
    int var;
    void (*func)()=sup;
    char buf[128];
    fgets(buf,133,stdin);
    func();
}
