//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NSCGSDock : NSObject
{
    struct CGRect _frame;
    unsigned int _orientation;
}

+ (id)currentDockForDisplays:(id)arg1;
@property(readonly) unsigned int orientation; // @synthesize orientation=_orientation;
@property(readonly) struct CGRect frame; // @synthesize frame=_frame;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1 orientation:(unsigned int)arg2;
- (id)updatedDockForDisplays:(id)arg1;

@end

