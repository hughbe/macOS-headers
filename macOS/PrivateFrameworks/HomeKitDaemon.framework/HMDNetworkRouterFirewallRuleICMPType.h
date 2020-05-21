//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface HMDNetworkRouterFirewallRuleICMPType : NSObject
{
    unsigned char _protocol;
    NSNumber *_typeValue;
    NSDictionary *_jsonDictionary;
}

+ (id)createListWithJSONDictionary:(id)arg1 key:(id)arg2;
+ (id)createWithJSONDictionary:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(readonly, nonatomic) NSNumber *typeValue; // @synthesize typeValue=_typeValue;
@property(readonly, nonatomic) unsigned char protocol; // @synthesize protocol=_protocol;
- (id)description;
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 protocol:(unsigned char)arg2 typeValue:(id)arg3;

@end

