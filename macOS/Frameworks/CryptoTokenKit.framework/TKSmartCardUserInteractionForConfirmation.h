//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>

#import <CryptoTokenKit/NSSecureCoding-Protocol.h>

@class TKSmartCardSlot;

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction <NSSecureCoding>
{
    BOOL _result;
    TKSmartCardSlot *_slot;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property __weak TKSmartCardSlot *slot; // @synthesize slot=_slot;
@property BOOL result; // @synthesize result=_result;
- (void)runWithReply:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

