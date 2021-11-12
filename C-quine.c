#include <stdio.h>
int main(){char *s="#include <stdio.h>int main(){char *s=;printf(%.18s%c%.19s%c%s%c;%c%.7s%c%.36s%c%s,s,10,s+18,34,s,34,10,s+38,34,s+45,34,s+81);}";
printf("%.18s%c%.19s%c%s%c;%c%.7s%c%.36s%c%s",s,10,s+18,34,s,34,10,s+38,34,s+45,34,s+81);}
