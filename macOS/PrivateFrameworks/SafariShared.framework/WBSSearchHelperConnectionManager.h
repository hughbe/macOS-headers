//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection;

@interface WBSSearchHelperConnectionManager : NSObject
{
    NSMutableSet *_clients;
    NSXPCConnection *_searchHelperConnection;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCConnection *searchHelperConnection; // @synthesize searchHelperConnection=_searchHelperConnection;
- (void)removeClient:(id)arg1;
- (id)searchHelperConnectionRequestedByClient:(id)arg1;
- (id)init;

@end

