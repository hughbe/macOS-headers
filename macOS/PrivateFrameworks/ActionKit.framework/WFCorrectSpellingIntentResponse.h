//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class NSArray;

@interface WFCorrectSpellingIntentResponse : INIntentResponse
{
    long long _code;
}

@property long long code; // @synthesize code=_code;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSArray *text; // @dynamic text;

@end

