#include <chrono>
#include <iostream>
#include <math.h>
using namespace std;
using namespace std::chrono;
int main()
{
long long a=1000000000000000;
auto start = high_resolution_clock::now();
for(int i=1; i<=1000000; i++) long b=a>>20;
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout << duration.count() << endl;
}