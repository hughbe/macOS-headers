//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMObject.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@interface AVB17221AEMVideoFormatSpecific : AVB17221AEMObject <NSCopying>
{
    unsigned int formatSpecific;
}

+ (id)keyPathsForValuesAffectingRtpPayloadSubtype;
+ (id)keyPathsForValuesAffectingFormatSubtype;
+ (id)keyPathsForValuesAffectingLevel;
+ (id)keyPathsForValuesAffectingProfile;
+ (id)keyPathsForValuesAffectingContentProtection;
@property unsigned int formatSpecific; // @synthesize formatSpecific;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugLogStringWithIndentation:(id)arg1;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlRepresentation;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
@property unsigned short rtpPayloadSubtype; // @dynamic rtpPayloadSubtype;
@property unsigned short formatSubtype; // @dynamic formatSubtype;
@property unsigned char level; // @dynamic level;
@property unsigned char profile; // @dynamic profile;
@property unsigned char contentProtection; // @dynamic contentProtection;

@end

