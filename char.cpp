#include <iostream>
using namespace std;

int main() {
int x=1;
char *p;
p = (char*) &x;
cout<<(*p);
    return 0;
}