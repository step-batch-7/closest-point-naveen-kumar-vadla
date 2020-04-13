#include <stdio.h>
#include <math.h>
#include "point.h"

double distance_between_two_points(Point point1, Point point2)
{
  int square_of_x_coords_difference = pow(point2.x - point1.x, 2);
  int square_of_y_coords_difference = pow(point2.y - point1.y, 2);
  return sqrt(square_of_x_coords_difference + square_of_y_coords_difference);
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  closest_food_location->x = current_location.x;
  closest_food_location->y = current_location.y;
}