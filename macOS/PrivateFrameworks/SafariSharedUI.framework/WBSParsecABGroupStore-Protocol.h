//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariSharedUI/NSObject-Protocol.h>

@class NSDate, NSNumber;
@protocol WBSParsecABGroupStoreClient;

@protocol WBSParsecABGroupStore <NSObject>
@property(retain, nonatomic) NSDate *generationDate;
@property(retain, nonatomic) NSNumber *groupIdentifier;
@property(nonatomic) __weak id <WBSParsecABGroupStoreClient> client;
@end

