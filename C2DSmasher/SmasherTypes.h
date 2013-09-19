//
//  SmasherTypes.h
//  C2DSmasher
//
//  Created by Peter Arato on 9/16/13.
//  Copyright (c) 2013 Peter Arato. All rights reserved.
//

typedef enum {
    kFlyingItemCloud,
    kFlyingItemEnemy,
    kFlyingItemFood
} FlyingItemType;

typedef enum {
    kFlyingItemOutOufScreen,
    kFlyingItemPlayerHit
} FlyingItemDeathType;

typedef enum {
    kPlayerSpeedNeg  = -1,
    kPlayerSpeedNull = 0,
    kPlayerSpeedPos  = 1
} SpeedDirection;
