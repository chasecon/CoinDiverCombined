#include "stayingMultiSprite.h"
#include "gamedata.h"
#include "renderContext.h"

StayingMultiSprite::StayingMultiSprite( const std::string& name) :  
MultiSprite(name) {}

StayingMultiSprite::StayingMultiSprite(const StayingMultiSprite& s) : 
MultiSprite(s){}

StayingMultiSprite::StayingMultiSprite( const std::string& name, int x, int y) :
  MultiSprite(name,x,y)
{ }

StayingMultiSprite::StayingMultiSprite(const std::string& n, int x, int y, const float size) :
  MultiSprite(n,x,y,size)
{}


void StayingMultiSprite::update(Uint32 ticks) { 
  advanceFrame(ticks);
}
