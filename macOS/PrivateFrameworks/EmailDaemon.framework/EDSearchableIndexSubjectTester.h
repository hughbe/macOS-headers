//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDSearchableIndexTesting-Protocol.h>

@class NSArray, NSString;

@interface EDSearchableIndexSubjectTester : NSObject <EDSearchableIndexTesting>
{
}

- (BOOL)verifySearchableItem:(id)arg1 againstExpectedData:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *fetchAttributes;
- (id)expressionFromDataSamples:(id)arg1;
- (id)transformDataForVerification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

