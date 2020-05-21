//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CLSilo;
@protocol GEOMapServiceTicket, OS_dispatch_queue;

@interface CLGeocoderInternal : NSObject
{
    CDUnknownBlockType _geocodeCompletionHandler;
    id <GEOMapServiceTicket> _ticket;
    NSObject<OS_dispatch_queue> *_queue;
    CLSilo *_responseSilo;
}

@property(retain) CLSilo *responseSilo; // @synthesize responseSilo=_responseSilo;
- (void)dealloc;
- (id)init;

@end

