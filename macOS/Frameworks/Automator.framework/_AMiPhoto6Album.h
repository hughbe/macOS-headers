//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Automator/_AMiPhoto6Item.h>

@class NSArray, NSString;

@interface _AMiPhoto6Album : _AMiPhoto6Item
{
}

@property(readonly, copy) NSString *url;
@property(readonly) int type;
@property(readonly, copy) _AMiPhoto6Album *parent;
@property(copy) NSString *name;
- (long long)id;
@property(readonly, copy) NSArray *children;
- (id)photos;
- (id)keywords;

@end

