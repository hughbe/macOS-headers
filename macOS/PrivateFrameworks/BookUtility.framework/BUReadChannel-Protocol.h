//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BookUtility/BUIOChannel-Protocol.h>
#import <BookUtility/BUStreamReadChannel-Protocol.h>

@protocol BUReadChannel <BUIOChannel, BUStreamReadChannel>
- (void)readFromOffset:(long long)arg1 length:(unsigned long long)arg2 handler:(void (^)(BOOL, NSObject<OS_dispatch_data> *, NSError *))arg3;
@end

