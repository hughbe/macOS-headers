//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSCGSSpace : NSObject
{
}

+ (id)spaceWithSpaceID:(unsigned long long)arg1;
+ (id)allUnmanagedSpaces;
+ (id)currentManagedSpaces;
+ (id)allManagedSpaces;
- (void)setMenuBarCompanionWindow:(unsigned int)arg1 offset:(double)arg2;
- (void)finishedResizeForRect:(struct CGRect)arg1 ackImmediately:(BOOL)arg2;

// Remaining properties
@property(readonly) unsigned long long spaceID; // @dynamic spaceID;

@end

