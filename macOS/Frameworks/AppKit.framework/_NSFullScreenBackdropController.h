//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _NSFullScreenSpace;

__attribute__((visibility("hidden")))
@interface _NSFullScreenBackdropController : NSObject
{
    _NSFullScreenSpace *_space;
    NSMutableArray *_backgroundWindows;
}

@property(nonatomic) _NSFullScreenSpace *space; // @synthesize space=_space;
- (void)removeBackgroundWindows;
- (void)updateBackgroundWindows;
- (id)_createBackgroundWindowOnScreen:(id)arg1;
- (id)backgroundWindowIDs;
- (void)dealloc;

@end

