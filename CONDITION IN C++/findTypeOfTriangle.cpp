#include <iostream>
using namespace std;
int main()
{
    float S1, S2, S3;
    cout<<"enter first side of triangle:";
    cin>>S1;
    cout<<"enter second side of triangle:";
    cin>>S2;
    cout<<"enter third side of triangle:";
    cin>>S3;
    if(S1==S2 && S2==S3 && S1==S3){
        cout<<"Triangle is equilateral.";
    }
    else if(S1!=S2 && S2!=S3 && S1!=S3){
        cout<<"Triangle is scalene.";
    }
    else{
        cout<<"Triangle is isosceles";
    }
    return 0;
}