#ifndef ACTION_CLASS_H
#define ACTION_CLASS_H

#include <string>
#include "scheduler/ActionPoint.h"
#include <vector>

class ActionClass{
public:

  int _priority;
  std::string _name;
  int8_t _action;
  bool _done;
  bool _possible;
  int _value;
  float _diff_factor;
  ActionPoint PAction;
  std::vector<int> _param;

  // make a constructor from json object ?
  ActionClass();
  ActionClass(std::string, int8_t, ActionPoint, int, float, std::vector<int>);

  void updatePriority(Point&);
  void checkPossibility();
  void changeSide();

  bool operator< ( const ActionClass &B) const;

private:
  // bonus point relation
  // procedure
};

std::ostream& operator<<(std::ostream&, const ActionClass&);



#endif
