//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PersonalizationPortrait/NSCopying-Protocol.h>
#import <PersonalizationPortrait/NSSecureCoding-Protocol.h>

@class CLPlacemark, PPLocationRecord;

@interface PPLocation : NSObject <NSCopying, NSSecureCoding>
{
    unsigned short _category;
    CLPlacemark *_placemark;
    PPLocationRecord *_mostRelevantRecord;
}

+ (id)describeCategory:(unsigned short)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) PPLocationRecord *mostRelevantRecord; // @synthesize mostRelevantRecord=_mostRelevantRecord;
@property(readonly, nonatomic) unsigned short category; // @synthesize category=_category;
@property(readonly, nonatomic) CLPlacemark *placemark; // @synthesize placemark=_placemark;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)customizedDescription;
- (BOOL)isEqualToLocation:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlacemark:(id)arg1 category:(unsigned short)arg2 mostRelevantRecord:(id)arg3;
- (id)init;

@end

