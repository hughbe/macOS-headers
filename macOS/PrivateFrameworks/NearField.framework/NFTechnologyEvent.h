//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NearField/NSSecureCoding-Protocol.h>

@interface NFTechnologyEvent : NSObject <NSSecureCoding>
{
    unsigned char _valueAddedServiceMode;
    BOOL _vasSupported;
    BOOL _touchIDRequired;
    unsigned short _systemCode;
    unsigned int _technology;
    unsigned int _terminalType;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) unsigned int terminalType; // @synthesize terminalType=_terminalType;
@property(readonly, nonatomic) BOOL touchIDRequired; // @synthesize touchIDRequired=_touchIDRequired;
@property(readonly, nonatomic) BOOL vasSupported; // @synthesize vasSupported=_vasSupported;
@property(readonly, nonatomic) unsigned short systemCode; // @synthesize systemCode=_systemCode;
@property(readonly, nonatomic) unsigned char valueAddedServiceMode; // @synthesize valueAddedServiceMode=_valueAddedServiceMode;
@property(readonly, nonatomic) unsigned int technology; // @synthesize technology=_technology;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithFieldNotification:(id)arg1;
- (id)initWithTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithTechnology:(unsigned int)arg1 andValueAddedServiceMode:(unsigned int)arg2 andSystemCode:(unsigned short)arg3;

@end

