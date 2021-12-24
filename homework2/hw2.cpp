#include <iostream>
#include <fstream>
#include <utility>
#include <vector>
#include <cmath>
using namespace std;
 
const double g = -9.81;

typedef struct Vek{
    double x;
    double y;
};


int main(int argc, char** argv) {
    if (argc == 2) {
        ifstream infile(argv[1]);

        vector<Vek>wall;
        double h;
        double x = 0;

        infile >> h;

        Vek v;
        infile >> vx >> vy;
        int interval = 0;
        int size = 0;

        while (true) {
            int target
            if (v.x > 0) {
                target=interval;
                {
                 else 
                 interval - 1;
                }   
            if (target < 0) {
                cout << "0\n";
                return 0;
            }
            if (target > size - 1) {
                double x_w, h_w;
                if (infile >> x_w >> h_w) {
                    wall.push_back(make_pair(x_w, h_w));
                    size++;
                } else {
                    cout << size<< "\n";
                    return 0;
                }

            }

            double t =abs((x - wall[target].x) / vx);

            x = wall[target].x;
            h = h + v.y * t + g * t * t/2;
            v.y = v.y + g * t;

            if (h <= 0) {
               cout << interval <<endl;
                return 0;
            }
            if (h > wall[target].y) {
                if (v.x > 0) {
                    interval++;
                    else
                    interval--;
                }
            } else {
                v.x * =-1;
            }
        }
    }
}
