//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSException.h>

@interface NSException (TSUAdditions)
+ (void)tsu_raiseWithError:(id)arg1;
+ (void)sfu_errnoRaise:(id)arg1 format:(id)arg2;
- (id)tsu_error;
- (int)sfu_localErrno;
@end

