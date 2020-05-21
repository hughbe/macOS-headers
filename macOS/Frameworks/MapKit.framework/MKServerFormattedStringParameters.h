//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCopying-Protocol.h>
#import <MapKit/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface MKServerFormattedStringParameters : NSObject <NSCopying, NSSecureCoding>
{
    NSDictionary *_variableOverides;
    CDStruct_aecaa75c _options;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *variableOverides; // @synthesize variableOverides=_variableOverides;
@property(readonly, nonatomic) CDStruct_aecaa75c options; // @synthesize options=_options;
- (unsigned long long)hash;
- (BOOL)isEqualToServerFormattedStringParameters:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2;
- (id)initWithOptions:(CDStruct_aecaa75c)arg1 variableOverrides:(id)arg2;

@end

