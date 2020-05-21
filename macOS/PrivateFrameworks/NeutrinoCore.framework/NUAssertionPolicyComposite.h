//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NeutrinoCore/NUAssertionPolicyHandler-Protocol.h>

@class NSArray, NSMutableArray, NSString;

@interface NUAssertionPolicyComposite : NSObject <NUAssertionPolicyHandler>
{
    NSMutableArray *_policies;
}

- (void).cxx_destruct;
@property(readonly) NSArray *policies; // @synthesize policies=_policies;
- (void)notifyAssertion:(id)arg1;
- (void)addPolicy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

