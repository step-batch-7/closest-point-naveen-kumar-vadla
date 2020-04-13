#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_locations[] = {{18, 76}, {19, 66}, {89, 57}, {9, 71}, {55, 38}};
  Point organism_locations[] = {{18, 86}, {97, 27}, {69, 7}, {10, 94}, {36, 27}};
  Point closest_food_location;
  int points_length = ARRAY_SIZE(food_locations);
  FOR_LOOP(0, ARRAY_SIZE(organism_locations))
  {
    get_closest_food(food_locations, points_length, organism_locations[i], &closest_food_location);
    printf("Location of organism: [%2d %2d], ", organism_locations[i].x, organism_locations[i].y);
    printf("Closest food target : [%2d %2d]\n", closest_food_location.x, closest_food_location.y);
  }
  return 0;
}