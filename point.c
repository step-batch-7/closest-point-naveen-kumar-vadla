#include "point.h"

distance distance_between_two_points(Point point1, Point point2)
{
  return SQUARE_ROOT(SQUARE(point2.x - point1.x) + SQUARE(point2.y - point1.y));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  distance closest_distance = MAX_DISTANCE;
  FOR_LOOP(0, points_length)
  {
    distance distance_to_food = distance_between_two_points(current_location, food_points[i]);
    if (distance_to_food < closest_distance)
    {
      closest_distance = distance_to_food;
      *closest_food_location = food_points[i];
    }
  }
}