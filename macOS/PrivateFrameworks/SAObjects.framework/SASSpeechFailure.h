//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASSpeechFailure : SABaseClientBoundCommand
{
}

+ (id)speechFailureWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechFailure;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *reasonDescription;
@property(nonatomic) int reason;
@property(nonatomic) long long errorCode;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

