#include<stdio.h>
namespace thinkingmachines
{
class Keyboard
{
public:
Keyboard & operator>>(int &j)
{
scanf("%d",&j);
fflush(stdin);
return *this;
}
Keyboard & operator>>(char &j)
{
scanf("%c",&j);
fflush(stdin);
return *this;
}
Keyboard & operator>>(char *j)
{
scanf("%s",j);
fflush(stdin);
return *this;
}
};
Keyboard kin;
}
using namespace thinkingmachines;
int main()
{
int x;
char m;
char a[21];
printf("Enter a number (int type) :");
kin>>x;
printf("Enter a character :");
kin>>m;
printf("Enter a string :");
kin>>a;
printf("Data entry done\n");
printf("%d\n",x);
printf("%c\n",m);
printf("%s\n",a);
return 0;
}