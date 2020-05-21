//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SecurityFoundation/SFKeyDerivingOperation-Protocol.h>

@class NSString;
@protocol SFDigestOperation, SFKeyDerivingOperation;

__attribute__((visibility("hidden")))
@interface SFX963KeyDerivationOperation : NSObject <SFKeyDerivingOperation>
{
    id _x963KeyDerivationOperationInternal;
}

+ (BOOL)supportsSecureCoding;
+ (long long)keySource;
- (void).cxx_destruct;
@property(copy, nonatomic) id <SFDigestOperation> digestOperation;
@property(copy, nonatomic) id <SFKeyDerivingOperation> sharedSecretOperation;
- (id)deriveKeyWithSpecifier:(id)arg1 fromKeySource:(id)arg2 error:(id *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSharedSecretOperation:(id)arg1 digestOperation:(id)arg2;
- (id)initWithSharedSecretOperation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

