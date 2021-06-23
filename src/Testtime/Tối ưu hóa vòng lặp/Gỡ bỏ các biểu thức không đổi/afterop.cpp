#include <chrono>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
using namespace std::chrono;
int main()
{
int i, j, x=10, a[1000];
auto start = high_resolution_clock::now();
j=100;
for(int i=0; i<1000; i++)
{
    a[i]=i+j*x*x;
}
auto stop = high_resolution_clock::now();
auto duration = duration_cast<nanoseconds>(stop - start);
cout << duration.count() << endl;
return 0;
}