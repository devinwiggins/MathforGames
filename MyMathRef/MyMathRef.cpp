// MyMathRef.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "MyMathLib\MyMathLib.h"

using namespace std;

int main()
{
	std::ofstream  outputfile;

	Vector2* A2d = new Vector2(0, 1);
	Vector2 B2d = Vector2(1, 0);
	/*assert(A2d->Add(B2d) == Vector2d(1, 1));
	assert(A2d->Subtract(B2d) == Vector2d(-1, 1));
	assert(A2d->ScalerMult(2) == Vector2d(0, 2));
	assert(A2d->Magnitude() == (0, 1));
	assert(A2d->Normalize() == Vector2d(0, 1));
	assert(A2d->DotProduct(B2d) == (0));*/

	Vector3* A3d = new Vector3(1, 0, 0);
	Vector3 B3d = Vector3(0, 1, 1);

	/*assert(A3d->Add(B3d) == Vector3d(1, 1, 1));
	assert(A3d->Subtract(B3d) == Vector3d(1, -1, -1));
	assert(A3d->ScalerMult(2) == Vector3d(2, 0, 0));
	assert(A3d->Magnitude() == (1));
	assert(A3d->Normalize() == Vector3d(1, 0, 0));
	assert(A3d->DotProduct(B3d) == (0));
	assert(A3d->CrossProduct(B3d) == Vector3d(0, -1, 1));*/


	Vector2 A2 = Vector2(0, 1);
	Vector2 B2 = Vector2(1, 3);
	Vector2 vec2 = Vector2(5, 4);
	Vector2 vec22 = Vector2(4, 5);

	Vector2 C2 = Vector2(1, 1);
	Vector2 D2 = Vector2(1, 3);

	Vector3 A3 = Vector3(1, 0, 0);
	Vector3 B3 = Vector3(0, 1, 0);
	Vector3 C3 = Vector3(0, 0, 1);
	Vector3 vec3 = Vector3(5, 4, 1);
	Vector3 vec33 = Vector3(4, 5, 1);

	Vector4 A4 = Vector4(1, 0, 0, 0);
	Vector4 B4 = Vector4(0, 1, 0, 0);
	Vector4 C4 = Vector4(0, 0, 1, 0);
	Vector4 D4 = Vector4(0, 0, 0, 1);
	Vector4 vec4 = Vector4(5, 4, 1, 2);
	Vector4 vec44 = Vector4(4, 5, 1, 2);

	Matrix2x2 mat2test = Matrix2x2(1, 3, 4, 10);

	Matrix2x2 mat = Matrix2x2(A2, B2);
	Matrix2x2 mat2 = Matrix2x2(C2, D2);
	Matrix3x3 mat3 = Matrix3x3(A3, B3, C3);
	Matrix3x3 mat32 = Matrix3x3(A3, B3, C3);
	Matrix3x3 mat33 = Matrix3x3(A3, B3, C3);
	//Matrix3x3 mat34 = Matrix3x3(A3, B3, C3);
	Matrix3x3 mat3x3_rot_x = Matrix3x3(1, 0, 0,
		0, 0, 1,
		0, 1, 0);
	Matrix3x3 mat3x3_rot_y = Matrix3x3(0, 0, 1,
		0, 1, 0,
		1, 0, 0);
	Matrix3x3 mat3x3_rot_z = Matrix3x3(0, 1, 0,
		1, 0, 0, 
		0, 0, 1);
	Matrix3x3 mat3x3 = Matrix3x3(1, 2, 3,
		2, 4, 5,
		2, 6, 8);
	Matrix3x3 mat3x32 = Matrix3x3(1, 3, 7,
		1, 2, 5,
		3, 4, 6);
	Matrix4x4 mat4 = Matrix4x4(A4, B4, C4, D4);
	Matrix4x4 mat42 = Matrix4x4(A4, B4, C4, D4);
	Matrix4x4 mat43 = Matrix4x4(A4, B4, C4, D4);
	Matrix4x4 mat_4x4 = Matrix4x4(0, 2, 0, 2,
		0, 0, 1, 2,
		1, 1, 4, 2,
		4, 2, 1, 2);
	Matrix4x4 mat4x4 = Matrix4x4(9, 2, 3, 4,
		1, 2, 6, 7,
		2, 4, 6, 8,
		3, 5, 7, 8);
	Matrix4x4 mat4x4_rot_x = Matrix4x4(1, 0, 0, 0,
		0, 0, 1, 0,
		0, 1, 0, 0,
		0, 0, 0, 1);
	Matrix4x4 mat4x4_rot_y = Matrix4x4(0, 0, 1, 0,
		0, 1, 0, 0,
		1, 0, 0, 0,
		0, 0, 0, 1);
	Matrix4x4 mat4x4_rot_z = Matrix4x4(0, 1, 0, 0,
		1, 0, 0, 0,
		0, 0, 1, 0,
		0, 0, 0, 1);
	Vector4 Vec4 = Vector4(6, 6, 3, 4);
	Vector3 Vec3 = Vector3(6, 6, 3);
	Vector2 Vec2 = Vector2(6, 6);

	cout << "-------READ ME----------\n";
	cout << "the txt file containing proof of my math library's math and being able to print to a file can be found in the folling directory: \nMyMathLib/MyMathRef/unitTest.txt \n";

	outputfile.open("unitTest.txt", ios_base::out);
	if (outputfile.is_open() == true)
		outputfile << "vector2 example: " << "\n";
		outputfile << vec2 << "\n";
		outputfile << "this vector will be added to the below vector to show vector addition" << "\n";
		outputfile << vec22 << "\n";
		outputfile << "addition result: " << "\n";
		Vector2 vec2Add = vec2 + vec22;
		outputfile << vec2Add << "\n"; 
		outputfile << "the first vector will be subtracted from the second vector to show vector subtraction" << "\n";
		Vector2 vec2Subtract = vec2 - vec22;
		outputfile << vec2Subtract << "\n";
		outputfile << "the first vector will be scaled by 5 to show scaler multiplication" << "\n";
		Vector2 vec2Mult = vec2 * 5;
		outputfile << vec2Mult << "\n";
		outputfile << "the same vector2 will have its magnitude displayed" << "\n";
		float vec2mag = vec2.Magnitude();
		outputfile << vec2mag << "\n\n";
		outputfile << "now it will be normalized" << "\n";
		Vector2 vec2normalized = vec2.Normalize();
		outputfile << vec2normalized << "\n";
		outputfile << "the dotproduct of the same 2 vector2's: " << "\n";
		float vec2dot = vec2.DotProduct(vec22);
		outputfile << vec2dot << "\n";
		
		outputfile << "vector3 example: " << "\n";
		outputfile << vec3 << "\n";
		outputfile << "this vector will be added to the below vector to show vector addition" << "\n";
		outputfile << vec33 << "\n";
		outputfile << "addition result: " << "\n";
		Vector3 vec3Add = vec3 + vec33;
		outputfile << vec3Add << "\n";
		outputfile << "the first vector will be subtracted from the second vector to show vector subtraction" << "\n";
		Vector3 vec3Subtract = vec3 - vec33;
		outputfile << vec3Subtract << "\n";
		outputfile << "the first vector will be scaled by 5 to show scaler multiplication" << "\n";
		Vector3 vec3Mult = vec3 * 5;
		outputfile << vec3Mult << "\n";
		outputfile << "the same vector3 will have its magnitude displayed" << "\n";
		float vec3mag = vec3.Magnitude();
		outputfile << vec3mag << "\n\n";
		outputfile << "now it will be normalized" << "\n";
		Vector3 vec3normalized = vec3.Normalize();
		outputfile << vec2normalized << "\n";
		outputfile << "the dotproduct of the same 2 vector3's: " << "\n";
		float vec3dot = vec3.DotProduct(vec33);
		outputfile << vec3dot << "\n";
		outputfile << " the cross product of the 2 vector3's: " << "\n";
		Vector3 vec3cross = vec3.CrossProduct(vec33);
		outputfile << vec3cross << "\n";

		outputfile << "vector4 example: " << "\n";
		outputfile << vec4 << "\n";
		outputfile << "this vector will be added to the below vector to show vector addition" << "\n";
		outputfile << vec44 << "\n";
		outputfile << "addition result: " << "\n";
		Vector4 vec4Add = vec4 + vec44;
		outputfile << vec3Add << "\n";
		outputfile << "the first vector will be subtracted from the second vector to show vector subtraction" << "\n";
		Vector4 vec4Subtract = vec4 - vec44;
		outputfile << vec4Subtract << "\n";
		outputfile << "the first vector will be scaled by 5 to show scaler multiplication" << "\n";
		Vector4 vec4Mult = vec4 * 5;
		outputfile << vec4Mult << "\n";
		outputfile << "the same vector4 will have its magnitude displayed" << "\n";
		float vec4mag = vec4.Magnitude();
		outputfile << vec4mag << "\n\n";
		outputfile << "now it will be normalized" << "\n";
		Vector4 vec4normalized = vec4.Normalize();
		outputfile << vec4normalized << "\n";
		outputfile << "the dotproduct of the same 2 vector4's: " << "\n";
		float vec4dot = vec4.DotProduct(vec44);
		outputfile << vec4dot << "\n";

		outputfile << "Matrix2x2 example: " << "\n";
		outputfile << mat << "\n";
		outputfile << "the previous matrix will be multiplied by the matix below to show matrix2 by matrix2" << "\n";
		outputfile << mat2 << "\n";
		outputfile << "mulitplication result: " << "\n";
		Matrix2x2 mat2x2 = mat * mat2;
		outputfile << mat2x2 << "\n";
		outputfile << "the first matrix of the 2 multiplied will be multiplied by this vector2 to show matrix2 by Vector2 multiplication" << "\n";
		Vector2 mat2vec2mult = mat * Vec2;
		outputfile << mat2vec2mult << "\n";

		outputfile << "Matrix3x3 example: " << "\n";
		outputfile << mat3 << "\n";
		outputfile << "the 2 3x3 Matrices below will be multiplied to show matrix3x3 by matrix3x3 multiplication" << "\n";
		outputfile << mat3x3 << "\n";
		outputfile << "and" << "\n";
		outputfile << mat3x32 << "\n";
		outputfile << "result: " << "\n";
		Matrix3x3 mat3Mult = mat3x3 * mat3x32;
		outputfile << mat3Mult << "\n";
		outputfile << "the first matrix of the 2 multiplied will be multiplied by this vector3 to show matrix3 by Vector3 multiplication" << "\n";
		outputfile << Vec3 << "\n";
		outputfile << "Mutiplication result: " << "\n";
		Vector3 mat3vec3Mult = mat3x3 * Vec3;
		outputfile << mat3vec3Mult << "\n";
		outputfile << "Matrix3x3 X rotation by 90 degrees example: " << "\n";
		outputfile << "result: " << "\n";
		outputfile << mat3.RotateX(90) << "\n";
		outputfile << "expected result: " << "\n";
		outputfile << mat3x3_rot_x << "\n";
		outputfile << "Matrix3x3 Y rotation by 90 degrees example: " << "\n";
		outputfile << "result: " << "\n";
		outputfile << mat32.RotateY(90) << "\n";
		outputfile << "expected result: " << "\n";
		outputfile << mat3x3_rot_y << "\n";
		outputfile << "Matrix3x3 Z rotation by 90 degrees example: " << "\n";
		outputfile << "result: " << "\n";
		outputfile << mat33.RotateZ(90) << "\n";
		outputfile << "expected result: " << "\n";
		outputfile << mat3x3_rot_z << "\n";

		outputfile << "Matrix4x4 example: " << "\n";
		outputfile << mat4 << "\n";
		outputfile << "the 2 4x4 Matrices below will be multiplied" << "\n";
		outputfile << mat_4x4 << "\n";
		outputfile << mat4x4 << "\n";
		outputfile << "multiplication" << "\n";
		Matrix4x4 mat4Mult = mat_4x4 * mat4x4;
		outputfile << mat4Mult << "\n";
		outputfile << "the first matrix of the 2 multiplied will be multiplied by this vector 4 to show matrix4 by Vector4 multiplication" << "\n";
		outputfile << Vec4 << "\n";
		Vector4 Mat4Vec4Mult = mat4x4 * Vec4;
		outputfile << "reult: " << "\n";
		outputfile << Mat4Vec4Mult << "\n";
		outputfile << "Matrix4x4 X rotation by 90 degrees example: " << "\n";
		outputfile << "result:" << "\n";
		outputfile << mat4.RotateX(90) << "\n";
		outputfile << "expected result: " << "\n";
		outputfile << mat4x4_rot_x << "\n";
		outputfile << "Matrix4x4 Y rotation by 90 degrees example: " << "\n";
		outputfile << "result: " << "\n";
		outputfile << mat42.RotateY(90) << "\n";
		outputfile << "expected result: " << "\n";
		outputfile << mat4x4_rot_y << "\n";
		outputfile << "Matrix4x4 Z rotation by 90 degrees example: " << "\n";
		outputfile << "result: " << "\n";
		outputfile << mat43.RotateZ(90) << "\n";
		outputfile << "expected result: " << "\n";
		outputfile << mat4x4_rot_z << "\n";


	outputfile.close();
	system("pause");
}

