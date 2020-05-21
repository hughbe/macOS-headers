//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@class NSString;

@interface NSError (FPAdditions)
+ (id)fp_translocatedError:(id)arg1;
+ (id)fp_invalidArgumentError:(id)arg1;
+ (id)_fp_errorWithPOSIXCode:(int)arg1 itemURL:(id)arg2 debugDescription:(id)arg3 format:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
+ (id)fp_errorWithPOSIXCode:(int)arg1 itemURL:(id)arg2 debugDescription:(id)arg3;
+ (id)fp_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)fp_errorWithPOSIXCode:(int)arg1;
+ (void)load;
- (id)fp_prettyDescription:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *fp_prettyDescription;
- (id)fp_userInfoFPItem;
- (id)fp_userInfoItem;
- (id)fp_userInfoValueForKey:(id)arg1;
- (id)fp_annotatedErrorWithOperationItem:(id)arg1;
- (id)fp_recoverableErrorWithBlock:(CDUnknownBlockType)arg1;
- (id)fp_annotatedErrorWithRecoveryAttempter:(id)arg1;
- (id)fp_annotatedErrorWithItem:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithURL:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithName:(id)arg1;
- (id)fp_annotatedErrorWithName:(id)arg1 path:(id)arg2 variant:(id)arg3;
- (id)fp_annotatedErrorWithItems:(id)arg1 variant:(id)arg2;
@property(readonly, nonatomic) BOOL fp_isFeatureUnsupportedError;
@property(readonly, nonatomic) BOOL fp_isSyncAnchorExpiredError;
@property(readonly, nonatomic) BOOL fp_isRemoteCrashError;
- (BOOL)fp_isWarning;
- (id)fp_asWarning;
- (BOOL)fp_isGenericPreflightError;
- (id)fp_genericPreflightError;
- (id)fp_internalErrorForVendorErrorWithItemCreationBlock:(CDUnknownBlockType)arg1;
- (id)fp_strippedError;
- (BOOL)fp_isPOSIXErrorCode:(int)arg1;
- (BOOL)fp_isCocoaErrorCode:(long long)arg1;
- (BOOL)fp_isFileProviderError:(long long)arg1;
@end

