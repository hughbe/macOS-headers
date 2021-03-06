//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AuthKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface AKRemoteDevice : NSObject <NSSecureCoding>
{
    BOOL _trusted;
    BOOL _inCircle;
    NSString *_name;
    NSString *_serialNumber;
    NSString *_buildNumber;
    NSString *_operatingSystemName;
    NSString *_operatingSystemVersion;
    NSString *_model;
    NSString *_colorCode;
    NSString *_enclosureColorCode;
    NSString *_coverGlassColorCode;
    NSString *_housingColorCode;
    NSString *_backingColorCode;
    NSDate *_lastUpdatedDate;
    NSString *_machineId;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *machineId; // @synthesize machineId=_machineId;
@property(readonly, copy, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, nonatomic) BOOL inCircle; // @synthesize inCircle=_inCircle;
@property(readonly, nonatomic) BOOL trusted; // @synthesize trusted=_trusted;
@property(readonly, copy, nonatomic) NSString *backingColorCode; // @synthesize backingColorCode=_backingColorCode;
@property(readonly, copy, nonatomic) NSString *housingColorCode; // @synthesize housingColorCode=_housingColorCode;
@property(readonly, copy, nonatomic) NSString *coverGlassColorCode; // @synthesize coverGlassColorCode=_coverGlassColorCode;
@property(readonly, copy, nonatomic) NSString *enclosureColorCode; // @synthesize enclosureColorCode=_enclosureColorCode;
@property(readonly, copy, nonatomic) NSString *colorCode; // @synthesize colorCode=_colorCode;
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property(readonly, copy, nonatomic) NSString *operatingSystemName; // @synthesize operatingSystemName=_operatingSystemName;
@property(readonly, copy, nonatomic) NSString *buildNumber; // @synthesize buildNumber=_buildNumber;
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_initWithInfo:(id)arg1;
- (id)initWithInfo:(id)arg1;

@end

