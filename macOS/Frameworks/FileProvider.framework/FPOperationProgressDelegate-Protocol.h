//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPOperation, NSDictionary, NSError;

@protocol FPOperationProgressDelegate <NSObject>
- (void)operation:(FPOperation *)arg1 didReceiveProgressInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
@end

