//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFURLLocalStreamTaskWork.h>

@interface __NSCFURLLocalStreamTaskWorkBlockOp : __NSCFURLLocalStreamTaskWork
{
    CDUnknownBlockType _block;
    _Bool _shouldWaitForTls;
}

+ (id)opWithBlock:(CDUnknownBlockType)arg1 description:(const char *)arg2;
- (void)dealloc;
- (void)markBlockAsWaitingOnTls:(BOOL)arg1;
- (BOOL)shouldWaitForTLS;
- (void)executeBlock;

@end

