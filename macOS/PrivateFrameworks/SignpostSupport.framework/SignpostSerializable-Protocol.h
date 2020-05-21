//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SignpostSupport/NSObject-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@protocol SignpostSerializable <NSObject>
+ (NSNumber *)serializationTypeNumber;
- (NSString *)humanReadableType;
- (NSDictionary *)humanReadableDictionaryRepresentation;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (NSDictionary *)serializeableDictionaryWithShouldRedact:(BOOL)arg1;
@end

