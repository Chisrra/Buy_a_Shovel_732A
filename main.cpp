#include <iostream>

using namespace std;

int main()
{
    int k,r, n=1; //precio pala, monedas sueltas, palas

    cin>>k>>r;
    while(true)
    {
        if( ( ( ( (k*n) % 10 ) - r) == 0) || ( ( (k*n) % 10 ) == 0 ) )
        {
            cout<<n<<endl;
            return 0;
        }
        else
        {
            n++;
        }
    }

    return 0;
}
