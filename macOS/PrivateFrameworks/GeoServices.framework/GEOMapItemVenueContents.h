//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOMapItemVenueContents-Protocol.h>

@class NSArray, NSString;

@interface GEOMapItemVenueContents : NSObject <GEOMapItemVenueContents>
{
    NSString *_title;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithItemList:(id)arg1;
- (id)initWithTitle:(id)arg1 items:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

