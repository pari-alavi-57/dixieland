/*******
 Copyright (c) 2020 Pari Alavi

 Inspired by http://www.cocos2d-x.org
 and https://wizardfu.com/
 
 ***/
//
//  Trampolines.h
//  
//
//  Created by Pari Alavi on 6/25/20.
//

#ifndef Trampolines_h
#define Trampolines_h

#include "cocos2d.h"

class Trampolines : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();
    virtual bool init();
    /*
     // a selector callback to start Level 1
     bool onTouchBeginLevel1 (Touch *touch, Event *unused_event);
     */
    // a selector callback
    void menuCloseCallback(cocos2d::Ref* pSender);
    
    // implement the "static create()" method manually
    CREATE_FUNC(Trampolines);
};

#endif /* Trampolines_h */
