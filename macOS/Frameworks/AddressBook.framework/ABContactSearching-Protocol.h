//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol ABSearchOperationDelegate;

@protocol ABContactSearching <NSObject>
@property(readonly) NSString *displayName;
- (NSArray *)searchOperationsForString:(NSString *)arg1 delegate:(id <ABSearchOperationDelegate>)arg2;
@end

