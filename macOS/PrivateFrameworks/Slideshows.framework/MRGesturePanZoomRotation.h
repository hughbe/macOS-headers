//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MRGesturePanZoomRotation : NSObject
{
    double time;
    double x;
    double y;
    double deltaX;
    double deltaY;
    double scale;
    double rotation;
    double speedX;
    double speedY;
    double speedScale;
    double speedRotation;
    unsigned char direction;
    unsigned char countOfTouches;
    BOOL okToAnimate;
    BOOL isInFocusMode;
    BOOL isInZoomMode;
}

@end

