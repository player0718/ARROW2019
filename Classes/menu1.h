
#ifndef __HELLOWORLD_SCENE_H__

#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

class HelloWorld1 : public cocos2d::Scene
{

public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	// a selector callback


	// implement the "static create()" method manually

	void menuCloseCallback(cocos2d::Ref* pSender);
	CREATE_FUNC(HelloWorld1);
};

#endif // __HELLOWORLD_SCENE_H__
