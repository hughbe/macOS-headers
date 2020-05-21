//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDVendorModelEntry, NSMutableSet;

@interface HMDVendorModelCollection : HMFObject
{
    HMDVendorModelEntry *_defaultEntry;
    NSMutableSet *_entries;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableSet *entries; // @synthesize entries=_entries;
@property(retain, nonatomic) HMDVendorModelEntry *defaultEntry; // @synthesize defaultEntry=_defaultEntry;
- (BOOL)isEqual:(id)arg1;
- (id)lookupProductData:(id)arg1;
- (id)lookupModel:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)attributeDescriptions;
- (id)init;

@end

