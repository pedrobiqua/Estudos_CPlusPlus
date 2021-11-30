#pragma once
#include "Point.h"
class Rectangle
{
public:
	Rectangle(int top, int left, int bottom, int right);
	~Rectangle() {}

	int GetTop() const { return itsTop; }
	int GetLeft() const { return itsLeft; }
	int GetBottom() const { return itsBottom; }
	int GetRight() const { return itsRight; }

	Point GetUpperLeft() const { return itsUpperLeft; }
	Point GetUpperRight() const { return itsUpperRight; }
	Point GetLowerLeft() const { return itsLowerLeft; }
	Point GetLowerRight() const { return itsLowerRight; }

	void SetUpperLeft(Point Location) { itsUpperLeft = Location; }
	void SetUpperRight(Point Location) { itsUpperRight = Location; }
	void SetLowerLeft(Point Location) { itsLowerLeft = Location; }
	void SetLowerRight(Point Location) { itsLowerRight = Location; }

	void SetTop(int top) { itsTop = top; }
	void SetLeft(int left) { itsLeft = left; };
	void SetBottom(int bottom) { itsBottom = bottom; }
	void SetRight(int right) { itsRight = right; }

	int GetArea() const;

private:
	Point itsUpperLeft;
	Point itsUpperRight;
	Point itsLowerLeft;
	Point itsLowerRight;
	int itsTop;
	int itsLeft;
	int itsBottom;
	int itsRight;
};

