//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExchangeWebServices/EWSBaseRequestType.h>

@class NSString;

@interface EWSUnsubscribeType : EWSBaseRequestType
{
    NSString *_SubscriptionId;
}

+ (id)definition;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *SubscriptionId; // @synthesize SubscriptionId=_SubscriptionId;

@end

