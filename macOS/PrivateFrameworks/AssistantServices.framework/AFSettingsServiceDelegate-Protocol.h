//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AssistantServices/NSObject-Protocol.h>

@class NSDictionary;

@protocol AFSettingsServiceDelegate <NSObject>
- (oneway void)syncVerificationServerReport:(NSDictionary *)arg1;
- (oneway void)syncVerificationPartialResult:(NSDictionary *)arg1;
@end

