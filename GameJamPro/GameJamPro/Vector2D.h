#pragma once

#include <iostream>
#include <string>

class Vector2D
{
	public:
		float X;
		float Y;

	public:
		Vector2D(float x=0, float y=0) : X(x), Y(y) { }

	public:
		// addition +
		inline Vector2D operator+(const Vector2D& v2) {
			return Vector2D(X + v2.X, Y + v2.Y);
		}
		// substract +
		inline Vector2D operator-(const Vector2D& v2) {
			return Vector2D(X - v2.X, Y - v2.Y);
		}
		// multiplication
		inline Vector2D operator*(const float scalar) {
			return Vector2D(X * scalar, Y * scalar);
		}

		void Log(std::string msg = " ") {
			std::cout << msg << "(X, Y) = (" << X << " " << Y << ")" << std::endl;
		}
};

