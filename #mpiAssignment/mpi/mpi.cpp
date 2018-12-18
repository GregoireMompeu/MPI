// AssignmentMPI.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include "mpi.h"
#include <math.h>
#include<iostream>
using namespace std;

/*int main(int argc, char **argv)
{


	int done = 0, n, myid, numprocs, I, rc;
	double PI25DT = 3.141592653589793238462643;
	double mypi, pi, h, sum, x, a;
	MPI_Init(&argc, &argv);
	MPI_Comm_rank(MPI_COMM_WORLD, &myid);
	MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
	cout << "numprocs " << numprocs << endl;

	if (myid == 0)
	{
		n = 1000000;
	}
	MPI_Bcast(&n, 1, MPI_INT, 0, MPI_COMM_WORLD);
	h = 1.0 / double(n);
	sum = 0.0;
	for (int i = myid + 1; i <= n; i += numprocs)
	{
		x = h *(double(i) - 0.5);
		sum += 4.0 / (1.0 + x * x);
	}
	mypi = h * sum;
	MPI_Reduce(&mypi, &pi, 1, MPI_DOUBLE, MPI_SUM, 0, MPI_COMM_WORLD);

	if (myid == 0)
	{
		cout << "pi is approximately: " << pi << endl;
		cout << "error is :" << fabs(pi - PI25DT) << endl;
	}
	MPI_Finalize();
	return 0;

}*/

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
