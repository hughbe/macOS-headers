//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNCountryInformation : NSObject <NSCopying>
{
    NSString *_isoCountryCode;
    NSString *_name;
    NSString *_phoneticName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *phoneticName; // @synthesize phoneticName=_phoneticName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithISOCountryCode:(id)arg1 name:(id)arg2 phoneticName:(id)arg3;

@end

