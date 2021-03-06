#ifndef ACTION_POINT_H
#define ACTION_POINT_H

#include "scheduler/Point.h"

class ActionPoint{
public:
  Point startPoint;
  Point endPoint;

  ActionPoint();
  ActionPoint(Point start, Point end);
  ActionPoint(int start_x, int start_y, int start_angle, int end_x, int end_y, int end_angle);
};

std::ostream& operator<<(std::ostream&, const ActionPoint&);

#endif
