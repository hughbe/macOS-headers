//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INRestaurantExport-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class CLLocation, NSString;

@interface INRestaurant : NSObject <INRestaurantExport, NSSecureCoding, NSCopying>
{
    CLLocation *_location;
    NSString *_name;
    NSString *_vendorIdentifier;
    NSString *_restaurantIdentifier;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSString *restaurantIdentifier; // @synthesize restaurantIdentifier=_restaurantIdentifier;
@property(copy) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) CLLocation *location; // @synthesize location=_location;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
- (BOOL)location:(id)arg1 equalToLocation:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocation:(id)arg1 name:(id)arg2 vendorIdentifier:(id)arg3 restaurantIdentifier:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

