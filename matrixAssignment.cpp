#include<iostream>		//header file
using namespace std;
void matrixAddition ();
void matrixSubtraction ();
void addScalar ();
void subtractScalar ();
void multiplyScalar ();		//functions definitions
void divideScalar ();
void transponseMatrix ();
int checkEquality ();
int checkSymmetry ();
int checkIdentity ();
int matrixMultiplication ();
int scalar, i, j, k;
int
main ()				//main method
{
  int dec;
  while (1)
    {
      cout << "\n1:Press 1 to add a scalar in matrix:\n";
      cout << "2:Press 2 to subtract a scalar from matrix:\n";
      cout << "3:Press 3 to multiply a scalar with matrix:\n";
      cout << "4:Press 4 to divide a scalar with matrix:\n";
      cout << "5:Press 5 to add two matrices:\n";
      cout << "6:Press 6 to subtract two matrices:\n";
      cout << "7:Press 7 to find transpose of matrix:\n";
      cout << "8:Press 8 to check symmetry of matrix:\n";	//menu printing
      cout << "9:Press 9 to check equality of matrices:\n";
      cout << "10:Press 10 to check identity of matrices:\n";
      cout << "11:Press 11 to find multiplication of matrices:\n";
      cout << "0:Press 0 to  exit the program:\n";
      cout << "Enter your choice:\t";
      cin >> dec;
      switch (dec)		//switch  statement
	{
	case 1:
	  {
	    addScalar ();
	    break;
	  }
	case 2:
	  {
	    subtractScalar ();
	    break;
	  }
	case 3:
	  {
	    multiplyScalar ();
	    break;
	  }
	case 4:
	  {
	    divideScalar ();
	    break;
	  }
	case 5:
	  {
	    matrixAddition ();
	    break;
	  }
	case 6:
	  {
	    matrixSubtraction ();
	    break;
	  }
	case 7:		//  cases
	  {
	    transponseMatrix ();
	    break;
	  }
	case 8:
	  {
	    checkSymmetry ();
	    break;
	  }
	case 9:
	  {
	    checkEquality ();
	    break;
	  }
	case 10:
	  {
	    checkIdentity ();
	    break;
	  }
	case 11:
	  {
	    matrixMultiplication ();
	    break;
	  }
	case 0:
	  {
	    system ("pause");
	    return 0;
	  }
	default:
	  {
	    cout << "Invalid Input";
	    return 0;
	  }
	}
    }


  system ("pause");		//exiting the program
  return 0;
}

void
addScalar ()			//This method add a scalar number in a matrix
{
  int rows = 0;
  int columns = 0;
  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)		//checking validity
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";
  cin >> columns;
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];	//array decleration
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];	//getting the values from the user and save it in the array
	}

    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";	//displaying the values 
	}
      cout << "\n";
    }
  cout << "Enter the scalar you want to add:\t";
  cin >> scalar;
  if (scalar < 0)
    {
      cout << "Invalid Input\n";
    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  array[i][j] = array[i][j] + scalar;	//adding the scalar in matrix array
	}

    }
  cout << "After addition of matrix : \n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}
      cout << "\n";
    }
}

void
subtractScalar ()		// This method subtract a scalar from the matrix 
{
  int rows = 0;
  int columns = 0;
  cout << "Enter the number of rows:\t";	//getting rows 
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";
  cin >> columns;		//getting columns
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];	//array decleration
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];	// storing values in array
	}

    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}
      cout << "\n";
    }
  cout << "Enter the scalar you want to subtract:\t";
  cin >> scalar;		//getting the scalar
  if (scalar < 0)
    {
      cout << "Invalid Input\n";
    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  array[i][j] = array[i][j] - scalar;	//subtracting the scalar from the matrix
	}

    }
  cout << "After subtraction of matrix : \n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";	//displaying the output
	}
      cout << "\n";
    }

}

void
multiplyScalar ()		//This method multiply the scalar with the matrix
{
  int rows = 0;
  int columns = 0;
  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";
  cin >> columns;
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];
	}

    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}
      cout << "\n";
    }
  cout << "Enter the scalar you want to multiply:\t";
  cin >> scalar;		//getting the scalar 
  if (scalar < 0)
    {
      cout << "Invalid Input\n";
    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  array[i][j] = array[i][j] * scalar;	//multiplying it with the matrix
	}

    }
  cout << "After multiplication of matrix : \n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";	//displaying the result
	}
      cout << "\n";
    }

}

void
divideScalar ()			//This function divide the scalar with the matrix
{
  int rows = 0;
  int columns = 0;
  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";
  cin >> columns;
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];
	}

    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}
      cout << "\n";
    }
  cout << "Enter the scalar you want to divide:\t";
  cin >> scalar;
  if (scalar <= 0)
    {
      cout << "Invalid Input\n";
    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  array[i][j] = array[i][j] / scalar;	//dividing the scalar with matrix
	}

    }
  cout << "After division of matrix : \n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}			//displaying the results
      cout << "\n";
    }

}

void
matrixAddition ()		//This method add the two matrices
{
  int rows = 0;			//rows of first matrix
  int columns = 0;		//columns of first matrix
  int rows1 = 0;		//rows of second matrix
  int columns1 = 0;		//columns of second matrix
  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";
  cin >> columns;		//getting rows and column of first matrix
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];	//array for the first matrix
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];
	}
    }
  cout << "For addition of two matrices we need another matrix:\n";
  cout << "Enter the number of rows for second matrix:\t";
  cin >> rows1;
  if (rows1 <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns for second matrix:\t";	//getting rows and columns for second matrix
  cin >> columns1;
  if (columns1 <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array1[rows1][columns1];	//array for the second matrix
  for (i = 0; i < rows1; i++)
    {
      cout << "Row-2:\t" << i << "\n";
      for (j = 0; j < columns1; j++)
	{
	  cout << "Enter the number:\t";	//getting the numbers for second matrix
	  cin >> array1[i][j];
	}
    }
  cout << "First Matrix:\n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";	//displaying first matrix
	}
      cout << "\n";
    }

  cout << "Second Matrix:\n";
  for (i = 0; i < rows1; i++)
    {
      for (j = 0; j < columns1; j++)
	{
	  cout << array1[i][j] << "\t";	//displaying second matrix
	}
      cout << "\n";
    }
  int sum[i][j];		//array for storing the sum 

  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  sum[i][j] = array[i][j] + array1[i][j];	//performing addition of matrices
	}

    }
  cout << "After Addition of matrices\n";
  if (rows == rows1 && columns == columns1)
    {
      for (i = 0; i < rows; i++)
	{
	  for (j = 0; j < columns; j++)
	    {
	      cout << sum[i][j] << "\t";	//displaying the sum 
	    }
	  cout << "\n";
	}
    }
  else
    {
      cout << "Invalid Input\n";
    }



}



void
matrixSubtraction ()		//This function perform subtraction of two matrices
{
  int rows = 0;
  int columns = 0;
  int rows1 = 0;
  int columns1 = 0;
  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";	//getting rows and columns of first matrix
  cin >> columns;
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];	//array for the first matrix
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];	//getting the values for first matrix
	}
    }
  cout << "For subtraction of two matrices we need another matrix:\n";
  cout << "Enter the number of rows for second matrix:\t";
  cin >> rows1;
  if (rows1 <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns for second matrix:\t";	// ]---  Getting rows and columns of second matrix
  cin >> columns1;
  if (columns1 <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array1[rows1][columns1];	//array for the second matrix
  for (i = 0; i < rows1; i++)
    {
      cout << "Row-2:\t" << i << "\n";
      for (j = 0; j < columns1; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array1[i][j];	//getting values 
	}
    }
  cout << "First Matrix:\n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}
      cout << "\n";
    }

  cout << "Second Matrix:\n";	//]---Displaying both matrices
  for (i = 0; i < rows1; i++)
    {
      for (j = 0; j < columns1; j++)
	{
	  cout << array1[i][j] << "\t";
	}
      cout << "\n";
    }
  int subt[i][j];		//Array for storing the difference of matrices

  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  subt[i][j] = array[i][j] - array1[i][j];	//array Subtraction
	}

    }
  cout << "After subtraction of matrices\n";
  if (rows == rows1 && columns == columns1)
    {
      for (i = 0; i < rows; i++)
	{
	  for (j = 0; j < columns; j++)
	    {
	      cout << subt[i][j] << "\t";	//]---Displaying the Difference/Subtraction
	    }
	  cout << "\n";
	}
    }
  else
    {
      cout << "Invalid Input\n";
    }



}

void
transponseMatrix ()		//This method/function finds the transponse of matrix
{
  int rows = 0;
  int columns = 0;
  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";
  cin >> columns;
  if (columns <= 0)		//]----Getting rows and columns of the matrix
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];	//----Getting the values----------
	}

    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";	//-----------Displaying the matrix----------
	}
      cout << "\n";
    }
  int transpose[j][i];		//array for storing the transponse 
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  transpose[j][i] = array[i][j];	//shifting the rows into columns

	}

    }
  cout << "Transpose of Matrix is:\n";
  for (i = 0; i < columns; i++)	//--We do so because we shifted the columns with rows
    {
      for (j = 0; j < rows; j++)
	{
	  cout << transpose[i][j] << "\t";	//-----Displaying the transponse
	}
      cout << "\n";
    }


}

int
checkSymmetry ()		//This function checks the symmetry of matrix
{
  int rows = 0;
  int columns = 0;

  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";	//]---Getting the rows and columns 
  cin >> columns;
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];	//getting the values
	}

    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";	//printing the matrix
	}
      cout << "\n";
    }
  int transpose[j][i];		//getting the transponse of matrix
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  transpose[j][i] = array[i][j];

	}

    }
  cout << "Transpose of Matrix is:\n";
  for (i = 0; i < columns; i++)
    {
      for (j = 0; j < rows; j++)
	{
	  cout << transpose[i][j] << "\t";	//Printing the transponse
	}
      cout << "\n";
    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  if (array[i][j] != transpose[i][j])	//comparing the matrix with its transponse
	    {
	      cout << "It is not a symmetric matrix.\n";
	      return 0;
	    }
	}

    }

  cout << "It is a symmetric matrix.\n";

}

int
checkEquality ()		//This function checks the equality of matrices
{
  int rows = 0;
  int columns = 0;
  int rows1 = 0;
  int columns1 = 0;
  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";
  cin >> columns;		//Getting the rows and columns of first matrix
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];
	}
    }
  cout << "For checking equality of two matrices we need another matrix:\n";
  cout << "Enter the number of rows for second matrix:\t";
  cin >> rows1;
  if (rows1 <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns for second matrix:\t";
  cin >> columns1;		//Getting rows and columns for second matrix
  if (columns1 <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array1[rows1][columns1];
  for (i = 0; i < rows1; i++)
    {
      cout << "Row-2:\t" << i << "\n";
      for (j = 0; j < columns1; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array1[i][j];
	}
    }
  cout << "First Matrix:\n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}
      cout << "\n";		//]---------------Printing the both matrices-------
    }

  cout << "Second Matrix:\n";
  for (i = 0; i < rows1; i++)
    {
      for (j = 0; j < columns1; j++)
	{
	  cout << array1[i][j] << "\t";
	}
      cout << "\n";
    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  if (array[i][j] != array1[i][j])	//comparing the both matrices
	    {
	      cout << "Matrices are not equal.\n";
	      return 0;
	    }
	}

    }

  cout << "Matrices are equal.\n";


}

int
checkIdentity ()		//This method checks whether the matrix is identitiy or not
{
  int rows = 0;
  int columns = 0;
  int rows1 = 0;
  int columns1 = 0;
  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";	//Getting the rows and columns of matrix
  cin >> columns;
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];
	}
    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}
      cout << "\n";
    }
  rows1 = rows;			//storing the rows of first matrix in the sample identity
  columns1 = columns;		//storing the columns of first matrix in the sample identity
  int identity[i][j];
  for (i = 0; i < rows1; i++)
    {
      for (j = 0; j < columns1; j++)
	{
	  if (i == j)
	    {
	      identity[i][j] = 1;	//conditions for the sample identity matrix
	    }
	  else
	    {
	      identity[i][j] = 0;
	    }
	}

    }
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  if (array[i][j] != identity[i][j])	//comparing the matrix given by the user with the sample identity matrix
	    {
	      cout << "It is not an identity matrix\n";
	      return 0;
	    }
	}
    }
  cout << "It is an identity matrix\n";

}

int
matrixMultiplication ()		//this function find the product of two matrices
{
  int rows = 0;
  int columns = 0;
  int rows1 = 0;
  int columns1 = 0;

  cout << "Enter the number of rows:\t";
  cin >> rows;
  if (rows <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns:\t";
  cin >> columns;		//]------Getting the rows and columns of first matrix
  if (columns <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array[rows][columns];
  for (i = 0; i < rows; i++)
    {
      cout << "Row:\t" << i << "\n";
      for (j = 0; j < columns; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array[i][j];	//------------Getting the values--------
	}
    }
  cout << "For multiplication of two matrices we need another matrix:\n";
  cout << "Enter the number of rows for second matrix:\t";
  cin >> rows1;
  if (rows1 <= 0)
    {
      cout << "Invalid number\n";
    }
  cout << "Enter the number of columns for second matrix:\t";	//------]--Getting the rows and columns of second matrix
  cin >> columns1;
  if (columns1 <= 0)
    {
      cout << "Invalid operation\n";
    }
  int array1[rows1][columns1];
  for (i = 0; i < rows1; i++)
    {
      cout << "Row-2:\t" << i << "\n";
      for (j = 0; j < columns1; j++)
	{
	  cout << "Enter the number:\t";
	  cin >> array1[i][j];	//Getting the values
	}
    }
  cout << "First Matrix:\n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << array[i][j] << "\t";
	}
      cout << "\n";
    }

  cout << "Second Matrix:\n";
  for (i = 0; i < rows1; i++)	//----]----Printing both matrices---------
    {
      for (j = 0; j < columns1; j++)
	{
	  cout << array1[i][j] << "\t";
	}
      cout << "\n";
    }
  int mult[i][j] = { };		//---------initializing the array with 0 to avoid dummy values
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  for (k = 0; k < rows; k++)
	    {


	      if (columns == rows1 || rows == columns1)
		{		//checking the conditions
		  mult[i][j] = mult[i][j] + array[i][k] * array1[k][j];	//multiplication of matrices
		}
	      else
		{
		  cout << "Can not perform your operation.";
		  cout <<
		    "For multiplication of matrices,rows of first matrix must be equal to columns of second matrix.\t";
		  return 0;
		}
	    }

	}

    }

  cout << "After Multiplication:\n";
  for (i = 0; i < rows; i++)
    {
      for (j = 0; j < columns; j++)
	{
	  cout << mult[i][j] << "\t";	//--------]-----Displaying the result------
	}
      cout << "\n";

    }				//                       -----------------------------------------------------------End of the Program---------------------------------------------------------------------------------





}
