//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAStartRequest.h>

@class NSString;

@interface SAStartStructuredDictationRequest : SAStartRequest
{
}

+ (id)startStructuredDictationRequestWithDictionary:(id)arg1 context:(id)arg2;
+ (id)startStructuredDictationRequest;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *structuredDictationType;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

