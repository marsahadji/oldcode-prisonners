#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


void printIt(std::vector <int> l){

    for (int i = 0; i < l.size(); ++i) {
        std::cout << " " << l[i];
    }
    std::cout << std::endl;
}

int escaped(int n)
{
   std::vector<int> l;

    for (int var = 0; var < n ; ++var)
        l.push_back(0);

    printIt(l);

    for (int i = 1; i < n; ++i) {

        for (int j = 0; j < n; ++j) {

            if((j+1) % (i+1) == 0) l[j] = 1 - l[j];
        }
        printIt(l);
    }

    int esc = 0;

    for (int i = 0; i < l.size(); ++i) {
        if(l[i] == 0 ) esc++;
    }

    return esc;
}


int main()
{
  std::cout << 10 << " => " << escaped(10) << std::endl;
  std::cout << 17 << " => " << escaped(17) << std::endl;
  std::cout << 33 << " => " << escaped(33) << std::endl;
  std::cout << 50 << " => " << escaped(50) << std::endl;
    return 0;
}
