//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/_AMiTunes8Item.h>

@class NSString;

@interface _AMiTunes8Playlist : _AMiTunes8Item
{
}

- (id)searchFor:(id)arg1 only:(int)arg2;
- (void)moveTo:(id)arg1;
@property(readonly) BOOL visible;
@property(readonly, copy) NSString *time;
@property(readonly) int specialKind;
@property int songRepeat;
@property(readonly) long long size;
@property BOOL shuffle;
@property(readonly, copy) _AMiTunes8Playlist *parent;
@property(copy) NSString *name;
@property(readonly) long long duration;
- (id)tracks;

@end

