
#include "pch.h"
#include "mpi.h"
#include <math.h>
#include<iostream>
using namespace std;

/*
int main(int argc, char **argv)
{

	int rank;
	int numprocs;
	double mypi, h, sum, x, pi;
	int n = 1000000;
	double PI25DT = 3.141592653589793238462643;
	sum = 0.0;
	h = 1.0 / double(n);

	//MPI initialzation
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);

	for (int i = rank + 1; i <= n; i += numprocs)
	{
		x = h * (double(i) - 0.5);
		sum += (double)4.0 / ((double)1.0 + x * x);
	}

	mypi = h * sum;

	if (rank != 0)
	{
		MPI_Send(&mypi, 1, MPI_DOUBLE_PRECISION, 0, 1, MPI_COMM_WORLD);
	
	}
	else
	{
		pi = mypi;
		for (int i = 1; i < numprocs; i++)
		{
			MPI_Recv(&mypi, 1, MPI_DOUBLE_PRECISION, i, MPI_ANY_TAG, MPI_COMM_WORLD, MPI_STATUSES_IGNORE);
			pi += mypi;
		}
		cout << "pi is approximately: " << pi << endl;
		cout << "error is :" << fabs(pi - PI25DT) << endl;
	}
	MPI_Finalize();
}*/