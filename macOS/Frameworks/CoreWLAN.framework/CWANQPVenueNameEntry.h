//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreWLAN/NSCopying-Protocol.h>
#import <CoreWLAN/NSSecureCoding-Protocol.h>

@class NSString;

@interface CWANQPVenueNameEntry : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_languageCode;
    NSString *_name;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithVenueName:(id)arg1 languageCode:(id)arg2;

@end

