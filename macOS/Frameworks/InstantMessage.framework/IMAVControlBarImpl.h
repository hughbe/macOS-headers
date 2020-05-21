//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InstantMessage/IMAVControlBar.h>

@class NSMutableArray;

@interface IMAVControlBarImpl : IMAVControlBar
{
    NSMutableArray *_controls;
    BOOL _updateScheduled;
}

+ (id)sharedControlBar;
- (void)_controlDidChange:(id)arg1;
- (void)_deferredControlSync;
- (void)removeAllControls;
- (void)removeControl:(id)arg1;
- (void)addControl:(id)arg1;
- (id)controls;
- (id)_dictionaryRepresentation;
- (id)init;

@end

