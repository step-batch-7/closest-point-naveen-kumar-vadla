#include <stdio.h>
#include "point.h"

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  closest_food_location->x = current_location.x;
  closest_food_location->y = current_location.y;
}