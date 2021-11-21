#include "Point.h"
#include<iostream>
Geom::Point::Point()
{
	this->x = 0.0; 
	this->y = 0.0;
}

Geom::Point::Point(double x, double y)
{
	this->x = x; 
	this->y = y;
}

void Geom::Point::afficherPoint() const
{  
	std::cout << "(" << this->x << "," << this->y << ")" << std::endl;

}

void Geom::Point::translate(double dx, double dy)
{
	this->x += dx; 
	this->y += dy;
}

bool Geom::Point::comparer(const Point& p) const
{
	if (this->x == p.x && this->y == p.y) {
		return true;
	}
	else
	return false;
}

double Geom::Point::distance(const Point& p) const
{
	double dis = sqrt(pow(p.x - this->x, 2) + pow(p.y - this->y,2));
	return dis;
}

Geom::Point::~Point()
{
	std::cout << "destructeur de  la classe Point" << std::endl;
}
