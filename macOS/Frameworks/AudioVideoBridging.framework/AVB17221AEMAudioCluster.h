//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AudioVideoBridging/AVB17221AEMCluster.h>

#import <AudioVideoBridging/NSCopying-Protocol.h>

@interface AVB17221AEMAudioCluster : AVB17221AEMCluster <NSCopying>
{
    unsigned char format;
    unsigned short channelCount;
}

@property unsigned char format; // @synthesize format;
@property unsigned short channelCount; // @synthesize channelCount;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)objectLogName;
- (void)appendVariableDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (void)appendFixedDescriptorContentToString:(id)arg1 withIndent:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isExpectedDescriptorType:(unsigned short)arg1;
- (id)xmlRepresentation;
- (BOOL)updateWithXML:(id)arg1;
- (id)xmlKey;
- (id)plistRepresentation;
- (BOOL)updateWithPlistEntry:(id)arg1;
- (unsigned long long)setDescriptor:(CDUnion_abb5f99a *)arg1;
- (BOOL)updateWithDescriptor:(CDUnion_abb5f99a *)arg1 descriptorLength:(unsigned short)arg2;
- (id)init;

@end

