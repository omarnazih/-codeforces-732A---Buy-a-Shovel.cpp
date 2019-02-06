#include <iostream>

using namespace std;

int main()
{
    int k,r;
    int x = 0;
    cin>> k >> r;
    do{
        if((x+r)%k == 0){
            x+=r;
            break;
        }
        x+=10;
    }while(x % k != 0);
    cout << x / k;
    return 0;
}
