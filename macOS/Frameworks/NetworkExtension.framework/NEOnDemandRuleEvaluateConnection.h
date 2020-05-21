//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEOnDemandRule.h>

@class NSArray;

@interface NEOnDemandRuleEvaluateConnection : NEOnDemandRule
{
    NSArray *_connectionRules;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *connectionRules; // @synthesize connectionRules=_connectionRules;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (BOOL)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

