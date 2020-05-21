//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase
{
    NSArray *_statusInactiveEvents;
    NSArray *_statusUnknownEvents;
}

+ (id)buildRequiredOnly;
+ (id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2;
+ (id)allowedReasons;
+ (id)allowedStatusKeys;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *statusUnknownEvents; // @synthesize statusUnknownEvents=_statusUnknownEvents;
@property(copy, nonatomic) NSArray *statusInactiveEvents; // @synthesize statusInactiveEvents=_statusInactiveEvents;
- (id)serializePayload;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;

@end

