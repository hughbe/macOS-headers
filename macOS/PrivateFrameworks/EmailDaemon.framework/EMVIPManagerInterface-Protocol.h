//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EAEmailAddressSet, EMObjectID, NSSet;
@protocol EMVIPManagerObserver;

@protocol EMVIPManagerInterface <NSObject>
- (void)removeVIPsWithEmailAddresses:(EAEmailAddressSet *)arg1;
- (void)removeVIPsWithIdentifiers:(NSSet *)arg1;
- (void)saveVIPs:(NSSet *)arg1;
- (void)cancelObservation:(EMObjectID *)arg1;
- (void)registerObserver:(id <EMVIPManagerObserver>)arg1 observationIdentifier:(EMObjectID *)arg2;
@end

