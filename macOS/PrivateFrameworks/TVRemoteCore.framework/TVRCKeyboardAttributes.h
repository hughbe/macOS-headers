//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVRemoteCore/NSSecureCoding-Protocol.h>

@class NSString, RTIDataPayload, TVRCPINEntryAttributes;

@interface TVRCKeyboardAttributes : NSObject <NSSecureCoding>
{
    BOOL _likelyPINEntry;
    BOOL _secure;
    BOOL _enablesReturnKeyAutomatically;
    NSString *_title;
    TVRCPINEntryAttributes *_PINEntryAttributes;
    NSString *_prompt;
    RTIDataPayload *_rtiDataPayload;
    long long _keyboardType;
    long long _returnKeyType;
    long long _autocapitalizationType;
    long long _autocorrectionType;
    long long _spellCheckingType;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic, getter=_spellCheckingType, setter=_setSpellCheckingType:) long long spellCheckingType; // @synthesize spellCheckingType=_spellCheckingType;
@property(nonatomic, getter=_autocorrectionType, setter=_setAutocorrectionType:) long long autocorrectionType; // @synthesize autocorrectionType=_autocorrectionType;
@property(nonatomic, getter=_autocapitalizationType, setter=_setAutocapitalizationType:) long long autocapitalizationType; // @synthesize autocapitalizationType=_autocapitalizationType;
@property(nonatomic, getter=_returnKeyType, setter=_setReturnKeyType:) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
@property(nonatomic, getter=_keyboardType, setter=_setKeyboardType:) long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property(nonatomic, getter=_enablesReturnKeyAutomatically, setter=_setEnablesReturnKeyAutomatically:) BOOL enablesReturnKeyAutomatically; // @synthesize enablesReturnKeyAutomatically=_enablesReturnKeyAutomatically;
@property(nonatomic, getter=_isSecure, setter=_setSecure:) BOOL secure; // @synthesize secure=_secure;
@property(nonatomic, getter=_isLikelyPINEntry, setter=_setLikelyPINEntry:) BOOL likelyPINEntry; // @synthesize likelyPINEntry=_likelyPINEntry;
@property(retain, nonatomic) RTIDataPayload *rtiDataPayload; // @synthesize rtiDataPayload=_rtiDataPayload;
@property(copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property(retain, nonatomic) TVRCPINEntryAttributes *PINEntryAttributes; // @synthesize PINEntryAttributes=_PINEntryAttributes;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToAttributes:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)_init;

@end

