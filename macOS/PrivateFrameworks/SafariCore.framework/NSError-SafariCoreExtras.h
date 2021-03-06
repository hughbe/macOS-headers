//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (SafariCoreExtras)
+ (id)safari_errorWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
@property(readonly, nonatomic) BOOL safari_isSQLiteCorruptionError;
@property(readonly, nonatomic) BOOL safari_isSQLiteError;
@property(readonly, copy, nonatomic) NSString *safari_privacyPreservingDescription;
- (id)safari_initWithDomain:(id)arg1 code:(long long)arg2 privacyPreservingDescription:(id)arg3;
- (BOOL)safari_isClientSideNetworkError;
@end

