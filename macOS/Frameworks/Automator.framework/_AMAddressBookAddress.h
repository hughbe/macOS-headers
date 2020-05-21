//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSString;

@interface _AMAddressBookAddress : SBObject
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(id)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(copy) NSString *state;
@property(copy) NSString *countryCode;
@property(copy) NSString *label;
@property(copy) NSString *country;
@property(copy) NSString *zip;
- (void)setId:(id)arg1;
- (id)id;
@property(copy) NSString *street;
@property(readonly, copy) NSString *formattedAddress;
@property(copy) NSString *city;

@end

