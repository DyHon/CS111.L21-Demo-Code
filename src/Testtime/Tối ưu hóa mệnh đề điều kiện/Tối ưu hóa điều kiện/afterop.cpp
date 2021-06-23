#include <chrono>
#include <iostream>
#include <math.h>
using namespace std;
using namespace std::chrono;
int main()
{
int x=-2, a=0;
auto start = high_resolution_clock::now();
for(int i=0; i<1000000; i++) if(x>1) if(x<10) a++;
auto stop = high_resolution_clock::now();
auto duration = duration_cast<microseconds>(stop - start);
cout << duration.count() << endl;
return 0;
}