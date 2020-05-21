//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString, _SFPBProductInventory;

@protocol _SFPBProductInventoryResult <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *availabilitys;
@property(copy, nonatomic) NSString *productIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_SFPBProductInventory *)availabilityAtIndex:(unsigned long long)arg1;
- (unsigned long long)availabilityCount;
- (void)addAvailability:(_SFPBProductInventory *)arg1;
- (void)clearAvailability;
@end

