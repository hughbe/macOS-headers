//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface C2RoutingTable : NSObject
{
    NSMutableDictionary *_routingTable;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *routingTable; // @synthesize routingTable=_routingTable;
- (id)copyAndDecorateRequest:(id)arg1;
- (void)updateOriginalHostname:(id)arg1 destinationHostname:(id)arg2;
- (id)init;

@end

