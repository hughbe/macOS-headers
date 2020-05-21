//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface PPConnectionsLocation : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _copiedToPasteboard;
    BOOL _shouldAggregate;
    NSString *_name;
    NSString *_originatingBundleID;
    NSString *_fullFormattedAddress;
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_locality;
    NSString *_administrativeArea;
    NSString *_postalCode;
    NSString *_country;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSURL *_originatingWebsiteURL;
    NSURL *_mapItemURL;
    NSString *_label;
    NSString *_value;
    NSString *_shortValue;
    NSString *_documentID;
    NSDictionary *_addressComponents;
    NSString *_source;
    NSString *_trigger;
    NSDate *_createdAt;
    NSNumber *_lifetime;
}

+ (BOOL)supportsSecureCoding;
+ (unsigned long long)round:(double)arg1 toNearest:(double)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *lifetime; // @synthesize lifetime=_lifetime;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(copy, nonatomic) NSString *trigger; // @synthesize trigger=_trigger;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSDictionary *addressComponents; // @synthesize addressComponents=_addressComponents;
@property(copy, nonatomic) NSString *documentID; // @synthesize documentID=_documentID;
@property(nonatomic) BOOL shouldAggregate; // @synthesize shouldAggregate=_shouldAggregate;
@property(copy, nonatomic) NSString *shortValue; // @synthesize shortValue=_shortValue;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) BOOL copiedToPasteboard; // @synthesize copiedToPasteboard=_copiedToPasteboard;
@property(copy, nonatomic) NSURL *mapItemURL; // @synthesize mapItemURL=_mapItemURL;
@property(copy, nonatomic) NSURL *originatingWebsiteURL; // @synthesize originatingWebsiteURL=_originatingWebsiteURL;
@property(copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property(copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(copy, nonatomic) NSString *country; // @synthesize country=_country;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(copy, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property(copy, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;
@property(copy, nonatomic) NSString *fullFormattedAddress; // @synthesize fullFormattedAddress=_fullFormattedAddress;
@property(copy, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqualToConnectionsLocation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)addressDictionary;
- (unsigned long long)_roundedPredictionAge;
- (unsigned char)_pexItemSource;
- (id)quickTypeItem;

@end

