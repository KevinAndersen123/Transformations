//@author Kevin Andersen
//@brief Matrix 3
//time taken: ~~3.5-4 hours
//known errors?:


#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 

#include <iostream>
#include "InitialMyMatrix3.h"
#include <string>

#define PI           3.14159265358979323846

/// <summary>
/// main enrtry point
/// </summary>
/// <returns>zero</returns>
int main()
{
	MyMatrix3 matrix{ 1,2,3,
					  4,5,6,
					  7, 8, 9};

	MyVector3 vector{ 1,1,1};

	//default constructer
	std::cout << matrix.toString() << std::endl;
	std::cout << "Default Contructer" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//Subtraction
	std::cout << matrix.operator-(MyMatrix3{ 1,1,1,1,1,1,1,1,1}).toString() << std::endl;
	std::cout << "0,1,2\n3,4,5\n6,7,8" << std::endl;
	std::cout << "Subtraction" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//Addition
	std::cout << matrix.operator+(MyMatrix3{ 1,1,1,1,1,1,1,1,1 }).toString() << std::endl;
	std::cout << "2,3,4\n5,6,7\n8,9,10" << std::endl;
	std::cout << "Addition" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//Multiply by matrix
	std::cout << matrix.operator*(MyMatrix3{ 1,1,2,2,1,5,1,6,1 }).toString() << std::endl;
	std::cout << "8,21,15\n20,45,39\n32,69,63" << std::endl;
	std::cout << "Multiply by a matrix" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//Multiply by vector
	std::cout << matrix.operator*(MyVector3{ 3,2,1}).toString() << std::endl;
	std::cout << "10, 28, 46" << std::endl;
	std::cout << "Multiply by a Vector" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//scale matrix
	std::cout << matrix.operator*(2).toString() << std::endl;
	std::cout << "2,4,6\n8,10,12\n14,16,18" << std::endl;
	std::cout << "Scale Multiply" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//transpose
	std::cout << matrix.transpose().toString() << std::endl;
	std::cout << "1,4,7\n2,5,8\n3,6,9" << std::endl;
	std::cout << "Transpose" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//determinant
	std::cout << matrix.determinant()<< std::endl;
	std::cout << "0" << std::endl;
	std::cout << "Determinant" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//inverse
	std::cout << matrix.inverse().toString() << std::endl;
	std::cout << "determinant is 0, not invertible  " << std::endl;
	std::cout << "Inverse" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//cout row
	std::cout << matrix.row(0).toString() << std::endl;
	std::cout << "1,2,3" << std::endl;
	std::cout << "Row" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//cout column
	std::cout << matrix.column(2).toString() << std::endl;
	std::cout << "3,6,9" << std::endl;
	std::cout << "Column" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//rotate z

	std::cout << (matrix.rotationZ(PI/2) * vector).toString() << std::endl;
	std::cout << "-1,1,1" << std::endl;
	std::cout << "Rotate Z" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//rotate y

	std::cout << (matrix.rotationY(PI / 2) * vector).toString() << std::endl;
	std::cout << "1,1,-1" << std::endl;
	std::cout << "Rotate Y" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//rotate x

	std::cout << (matrix.rotationX(PI / 2) * vector).toString() << std::endl;
	std::cout << "1,-1,1" << std::endl;
	std::cout << "Rotate X" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//translation

	MyMatrix3 newTranslation = matrix.translation(MyVector3{ 12,8,1});

	std::cout << newTranslation.toString() << std::endl;
	std::cout << "1,0,12\n0,1,8\n0,0,1" << std::endl;
	std::cout << "Translation" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	//scale

	std::cout << matrix.scale(3).toString() << std::endl;
	std::cout << "3,0,0\n0,3,0\n0,0,3" << std::endl;
	std::cout << "Scale" << std::endl;
	std::cout << "------------------------------------" << std::endl;

	std::system("pause");
	return 0;
}