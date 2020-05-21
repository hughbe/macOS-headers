//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSObject-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class NSDictionary, NSString;

@protocol INGenericIntent <NSObject, NSCopying, NSSecureCoding>
@property(copy) NSDictionary *parametersByName;
@property(copy) NSString *verb;
@property(copy) NSString *domain;
- (BOOL)isGenericIntent;
@end

