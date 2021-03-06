#ifndef STAYINGMULTISPRITE__H
#define STAYINGMULTISPRITE__H
#include <string>
#include <vector>
#include <cmath>
#include "drawable.h"
#include "multisprite.h"

class StayingMultiSprite : public MultiSprite {
public:
  StayingMultiSprite(const std::string&);
  StayingMultiSprite(const StayingMultiSprite&);
  StayingMultiSprite( const std::string& name, int x, int y);
  StayingMultiSprite(const std::string&, int x, int y, const float size);

  virtual void update(Uint32 ticks);

protected:

};
#endif
