#include <chrono>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;
using namespace std::chrono;
int main()
{
char s[] = "STARFORGE starts with a blob of gas that can be tens to hundreds of light-years across and up to millions of times the mass of the sun. Turbulence inside the cloud creates dense pockets that collapse to forge new stars. Those stars then launch powerful jets, give off radiation, shed stellar winds and explode in supernovas. Eventually, these phenomena blow the last vestiges of the cloud away and leave behind a hive of young stars. The whole process takes millions of years — or months of computing time, even running on supercomputers.";
auto start = high_resolution_clock::now();
for(int x=0; x<10000; x++)
for (size_t i = 0, len = strlen(s); i < len; ++i)
    if (s[i] == ' ')
        s[i] = '*';
auto stop = high_resolution_clock::now();
auto duration = duration_cast<nanoseconds>(stop - start);
cout << duration.count() << endl;
return 0;
}