//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSFunctionRow : NSObject
{
}

+ (struct CGRect)defaultFrameForType:(long long)arg1;
+ (id)makeSystemFunctionRowForTouchBar:(id)arg1 systemType:(long long)arg2;
+ (void)markActiveFunctionRowsAsDimmed:(BOOL)arg1;
+ (void)removeActiveFunctionRow:(id)arg1;
+ (void)addActiveFunctionRow:(id)arg1;
+ (id)_topLevelFunctionRowViews;
+ (id)activeFunctionRows;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)isDynamicFunctionRowAvailable;
+ (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
+ (void)initialize;
+ (id)functionRowContentViewForContextID:(unsigned int)arg1;
+ (int)associatedDisplay;
+ (id)associatedScreenAndDisplay:(int *)arg1;
- (id)device;
- (id)touches;
- (struct CGPoint)convertPointFromDevice:(struct CGPoint)arg1;
- (struct CGPoint)convertPointToDevice:(struct CGPoint)arg1;
- (id)_dumpLayer;

@end

