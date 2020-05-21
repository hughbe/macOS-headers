//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface CPAnalyticsEventMatcher : NSObject
{
    NSString *_eventKeyToMatch;
    NSDictionary *_eventPropertiesToMatch;
    NSArray *_conditionalChecks;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *conditionalChecks; // @synthesize conditionalChecks=_conditionalChecks;
@property(readonly, nonatomic) NSDictionary *eventPropertiesToMatch; // @synthesize eventPropertiesToMatch=_eventPropertiesToMatch;
@property(readonly, nonatomic) NSString *eventKeyToMatch; // @synthesize eventKeyToMatch=_eventKeyToMatch;
- (id)_validateAndParseConditionalChecks:(id)arg1;
- (id)_validateAndParseEventProperties:(id)arg1;
- (id)_validateAndParseEventKey:(id)arg1;
- (BOOL)doesMatch:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

