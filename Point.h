#pragma once
namespace Geom{
class Point
{
public:
	Point();
	Point(double x, double y); 
	void afficherPoint() const;
	void translate(double dx, double dy);
	bool comparer(const Point& p) const;
	~Point();
private: 
	double x; 
	double y;
};
};
