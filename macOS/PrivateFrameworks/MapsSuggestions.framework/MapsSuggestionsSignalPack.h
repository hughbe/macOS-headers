//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/NSCopying-Protocol.h>
#import <MapsSuggestions/NSMutableCopying-Protocol.h>
#import <MapsSuggestions/NSSecureCoding-Protocol.h>

@interface MapsSuggestionsSignalPack : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    struct SignalPack _innerSignalPack;
}

+ (BOOL)supportsSecureCoding;
+ (id)signalPackFromData:(id)arg1;
+ (id)extractFromDestinationMapItem:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
+ (id)extractFromDestinationEntry:(id)arg1 originCoordinate:(struct CLLocationCoordinate2D)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (struct SignalPack *)innerSignalPack;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)data;
- (id)encodedFeatureDictionary;
- (id)mutableCopy;
- (id)copy;
- (BOOL)mergeIntoSignalPack:(id)arg1;
- (unsigned long long)count;
- (BOOL)isEmpty;
- (float)valueForSignalType:(long long)arg1;
- (BOOL)hasType:(long long)arg1;
- (id)initWithSignalPack:(id)arg1;

@end

