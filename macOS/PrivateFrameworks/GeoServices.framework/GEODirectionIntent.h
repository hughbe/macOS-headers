//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOResolvedItem;

@interface GEODirectionIntent : NSObject
{
    GEOResolvedItem *_origin;
    GEOResolvedItem *_destination;
    int _transportType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) GEOResolvedItem *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOResolvedItem *origin; // @synthesize origin=_origin;
- (id)initWithDirectionIntent:(id)arg1;

@end

