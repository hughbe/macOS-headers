//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SystemPolicy/NSSecureCoding-Protocol.h>

@class NSString;

@interface SPExecutionPolicyItem : NSObject <NSSecureCoding>
{
    NSString *_itemPath;
    NSString *_signingID;
    NSString *_teamID;
    NSString *_cdHash;
    BOOL _needsApproval;
    BOOL _needsOverride;
    BOOL _knownMalware;
    NSString *_blockedReasonDescription;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *blockedReasonDescription; // @synthesize blockedReasonDescription=_blockedReasonDescription;
@property(readonly, nonatomic) BOOL knownMalware; // @synthesize knownMalware=_knownMalware;
@property(readonly, nonatomic) BOOL needsOverride; // @synthesize needsOverride=_needsOverride;
@property(readonly, nonatomic) BOOL needsApproval; // @synthesize needsApproval=_needsApproval;
@property(readonly, nonatomic) NSString *cdHash; // @synthesize cdHash=_cdHash;
@property(readonly, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(readonly, nonatomic) NSString *signingID; // @synthesize signingID=_signingID;
@property(readonly, nonatomic) NSString *itemPath; // @synthesize itemPath=_itemPath;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemPath:(id)arg1 signingID:(id)arg2 teamID:(id)arg3 cdHash:(id)arg4 needsApproval:(BOOL)arg5 needsOverride:(BOOL)arg6 knownMalware:(BOOL)arg7 blockedReasonDescription:(id)arg8;
- (id)init;

@end

