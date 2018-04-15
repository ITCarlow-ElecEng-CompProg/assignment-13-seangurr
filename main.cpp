/** Sean Gurr
 *  C00221886
 *  Ex. 13
 *  Prime Number Calculator
 *  07/12/2017
 */



/**< Preprocessor Directives */
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

/**< Main Fucntion */
int main()
{
	/**< Variable declarations */
	int n = 0,i = 2, output = 0,j = 2;


    /**< creates a file output object called primeNumbers, which creates a text file (primeNumbers.txt)
    and outputs to it (ios::out)*/
    ofstream primeNumbers( "primeNumbers.txt", ios::out );

    /**< An Exhaustive or Brute Force Search to find all prime numbers between 2 and n */
	cout << "Exhaustive Search for Prime Numbers!" << endl;

	/**< instead of printing out to console (cout), this prints to primeNumbers.txt */
    primeNumbers<<"PrimeNumbers!!!!"<<endl;

    /**< determine whether or not the open operation succeeded */
	if (!primeNumbers)
	{
		cerr << "File could not opened!" << endl;
		exit( 1 );
	}

	/**< Do while loop criteria to ensure a value greater than 1 is entered*/
	do
	{
		cout << "\nEnter positive value for n greater than 1: ";
		cin >> n;
	}
	while (n <= 1);

	/**< for loop criteria */
    for(j=2;j<=n;j++)
    {
        /**< /**< nested for loop criteria */
        for (i=2;i<j;i++)
        {
                /**< if a number 'j' is divisible by any number between 2 and j, then the checker notes that 'j' isnt prime */
                if (j%i==0)
                {
                   break;
                }
        }

        /**< if i is equal to j */
        if (i == j)
        {
            output = j;
            primeNumbers<<output<<endl;
            cout << "\nPrime Number = " << output << endl;
        }
    }

    /**< close file */
    primeNumbers.close();


	return 0;
}
