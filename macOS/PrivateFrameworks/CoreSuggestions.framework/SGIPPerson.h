//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSString;

@interface SGIPPerson : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_name;
    NSString *_handle;
    NSString *_handleType;
}

+ (BOOL)supportsSecureCoding;
+ (id)personWithIPPerson:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *handleType; // @synthesize handleType=_handleType;
@property(retain, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPerson:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)toIPPerson;

@end

