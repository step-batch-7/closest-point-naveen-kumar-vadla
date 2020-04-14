/* 
You are a single celled organism whose location is represented in two dimensions.
You have several food targets around you, whose locations are also represented in two dimensions.

Write a program, which when given the above data can determine the food target closest to the single celled organism.
Assuming that there are five food targets at:
    [18 76] [19 66] [89 57] [9 71] [55 38]

Location of organism: [18 86],  Closest food target : [18 76]
Location of organism: [97 27],  Closest food target : [89 57]
Location of organism: [69 7],   Closest food target : [55 38]
Location of organism: [10 94],  Closest food target : [18 76]
Location of organism: [36 27],  Closest food target : [55 38]
*/
#include <math.h>

typedef struct
{
  int x;
  int y;
} Point;
typedef double distance;

#define ARRAY_SIZE(array) (sizeof(array) / sizeof(*array))
#define FOR_LOOP(startAt, endAt) for (int i = startAt; i < endAt; i++)
#define MAX_DISTANCE 10000000000.00
#define SQUARE(number) pow(number, 2)
#define SQUARE_ROOT(number) sqrt(number)

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
distance distance_between_two_points(Point point1, Point point2);
