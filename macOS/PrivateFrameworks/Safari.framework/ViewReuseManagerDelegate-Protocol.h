//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@class NSView, ViewReuseManager;

@protocol ViewReuseManagerDelegate <NSObject>
- (void)viewReuseManager:(ViewReuseManager *)arg1 prepareView:(NSView *)arg2 toRepresentObjectAtIndex:(unsigned long long)arg3;
- (void)viewReuseManager:(ViewReuseManager *)arg1 willRecycleView:(NSView *)arg2;
@end

