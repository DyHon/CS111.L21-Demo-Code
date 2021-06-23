#include <chrono>
#include <iostream>
#include <math.h>
using namespace std;
using namespace std::chrono;
int main()
{
int x=2, a=0;
auto start = high_resolution_clock::now();
for(int i=0; i<1000000; i++)
    switch(x)
    {
        case 1:
        {
            a=x;
            break;
        }
        case 2:
        {
            x=a;
            break;
        }
        case 3:
        {
            a+=x;
            break;
        }
        case 4:
        {
            x*=a;
            break;
        }
    }
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout << duration.count() << endl;
return 0;
}