//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

#import <SiriClientFlow/CFLocalAceHandling-Protocol.h>

@class NSString;

@interface CFBCGetNumberFormattedString : SABaseClientBoundCommand <CFLocalAceHandling>
{
}

+ (id)aceObjectWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNumberFormattedStringWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getNumberFormattedString;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSString *variant;
@property(copy, nonatomic) NSString *style;
@property(copy, nonatomic) NSString *number;
@property(copy, nonatomic) NSString *locale;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)handleWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

