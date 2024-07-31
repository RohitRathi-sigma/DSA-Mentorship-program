
#include <iostream>
using namespace std;
int main() {

cout<<"Numbers from 1 to 100 divisible by 3"<<endl;
for(int i=1;i<101;i++)
{
    if(i%3==0)
    {
        cout<<i<<"is divisible of three"<<endl;
    }
}
    return 0;
}