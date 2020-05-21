//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVRemoteCore/NSSecureCoding-Protocol.h>

@class NSDictionary, NSError, NSSet, NSString, _TVRCKeyboardState;

@interface _TVRCDeviceState : NSObject <NSSecureCoding>
{
    BOOL _supportsTouchEvents;
    BOOL _paired;
    long long _connectionState;
    unsigned long long _pairingCapability;
    long long _connectionType;
    NSString *_name;
    NSString *_identifier;
    NSDictionary *_alternateIdentifiers;
    NSString *_model;
    NSSet *_supportedButtons;
    _TVRCKeyboardState *_keyboardState;
    long long _disconnectReason;
    NSError *_disconnectError;
}

+ (BOOL)supportsSecureCoding;
+ (id)setOfStatesFromDevices:(id)arg1;
+ (id)deviceStateFromDevice:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSError *disconnectError; // @synthesize disconnectError=_disconnectError;
@property(nonatomic) long long disconnectReason; // @synthesize disconnectReason=_disconnectReason;
@property(copy, nonatomic) _TVRCKeyboardState *keyboardState; // @synthesize keyboardState=_keyboardState;
@property(copy, nonatomic) NSSet *supportedButtons; // @synthesize supportedButtons=_supportedButtons;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSDictionary *alternateIdentifiers; // @synthesize alternateIdentifiers=_alternateIdentifiers;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic, getter=isPaired) BOOL paired; // @synthesize paired=_paired;
@property(nonatomic) BOOL supportsTouchEvents; // @synthesize supportsTouchEvents=_supportsTouchEvents;
@property(nonatomic) long long connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) unsigned long long pairingCapability; // @synthesize pairingCapability=_pairingCapability;
@property(nonatomic) long long connectionState; // @synthesize connectionState=_connectionState;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

