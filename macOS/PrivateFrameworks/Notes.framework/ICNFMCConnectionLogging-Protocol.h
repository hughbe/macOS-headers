//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/NSObject-Protocol.h>

@class NSData, NSString;

@protocol ICNFMCConnectionLogging <NSObject>
- (void)flushLog;
- (void)logBytes:(void *)arg1 length:(unsigned long long)arg2;
- (void)logData:(NSData *)arg1 range:(struct _NSRange)arg2;
- (void)logData:(NSData *)arg1;
- (void)logString:(NSString *)arg1;
@end

