#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    string line;
    int    xn=0;
    int    yn=0;
    int    xr=0;
    int    yr=0;
    int    xl=0;
    int    yl=0;
    double minr=1;
    double minl=1;
    ifstream in("in.txt");
        in >> xn >> yn;

        int x =0;
        int y=0;
        while (in >> x >> y)
        {
                if(x==0 && y==0){
                    continue;
                }
                double cs=(xn*x+yn*y)/(sqrt(x*x+y*y)*sqrt(xn*xn+yn*yn));
                cs=round(cs * 10000000000.0) / 10000000000.0;
                if (cs-minl <= 0 && (xn*y-yn*x)>0)
                {
                    minl = cs;
                    xr = x;
                    yr = y;

                }
                if (cs-minr <= 0 && (xn*y-yn*x)<=0)
                {
                    minr = cs;
                    xl = x;
                    yl = y;
                }
            }
    in.close();
    cout << "Leftmost: " << xr << " " << yr << "\n";
    cout << "Rightmost: " << xl << " " << yl << "\n";

    return 0;
}
