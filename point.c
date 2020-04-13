#include "point.h"

double distance_between_two_points(Point point1, Point point2)
{
  return SQUARE_ROOT(SQUARE(point2.x - point1.x) + SQUARE(point2.y - point1.y));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location)
{
  closest_food_location->x = current_location.x;
  closest_food_location->y = current_location.y;
  double min_distance = MAX_DISTANCE;
  FOR_LOOP(0, points_length)
  {
    double distance_to_food = distance_between_two_points(current_location, food_points[i]);
    if (distance_to_food < min_distance)
    {
      min_distance = distance_to_food;
      closest_food_location->x = food_points[i].x;
      closest_food_location->y = food_points[i].y;
    }
  }
}