#ifndef __gamemenu_H__
#define __gamenenu_H__
#include "cocos2d.h"
USING_NS_CC;
class gamemenu:public Layer
{
public:
	static Scene* createScene();

	 bool init();

	void menuCloseCallback(Ref * pSender);
	void menubegingame_danji(Ref * pSender);
	void menubegingame_lianji(Ref * pSender);

	CREATE_FUNC(gamemenu);
};
#endif

