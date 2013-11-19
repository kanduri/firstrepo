#include <iostream>
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <vector>

using namespace std;

int gridsize = 100;
double D = 1;
double timestep = 0.01;
int iter = 100;
double pi = 3.1415926535;

typedef vector<double> row;
typedef vector<row> matrix;

matrix rho(gridsize, gridsize);
matrix halfstep(gridsize, gridsize);

void initialize()
{
	int i,j;
	for (i=0; i<gridsize; i++) {
		for (j=0; j<gridsize; j++) {
			rho[i][j] = sin(i*2*pi)*sin(j*2*pi);
			}
		}
	}

double adimat()
{

	}