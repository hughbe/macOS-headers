//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FMAdditions)
+ (id)fm_genericError;
+ (id)fm_cancelledError;
+ (id)fm_timeoutError;
+ (id)fm_errorWithCode:(long long)arg1;
- (BOOL)fm_isFileNotFoundError;
- (BOOL)fm_isCancelledError;
- (BOOL)fm_isTimeoutError;
@end

