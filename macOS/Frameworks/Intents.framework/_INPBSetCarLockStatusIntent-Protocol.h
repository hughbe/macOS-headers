//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class _INPBDataString, _INPBIntentMetadata;

@protocol _INPBSetCarLockStatusIntent <NSObject>
@property(nonatomic) BOOL hasLocked;
@property(nonatomic) BOOL locked;
@property(readonly, nonatomic) BOOL hasIntentMetadata;
@property(retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property(readonly, nonatomic) BOOL hasCarName;
@property(retain, nonatomic) _INPBDataString *carName;
@end

