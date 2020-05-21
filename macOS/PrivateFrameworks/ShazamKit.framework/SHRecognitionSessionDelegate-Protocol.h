//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ShazamKit/NSObject-Protocol.h>

@class NSError, SHMatch, SHRecognitionSession, SHSignature;

@protocol SHRecognitionSessionDelegate <NSObject>
- (void)session:(SHRecognitionSession *)arg1 didFailForSignature:(SHSignature *)arg2 withError:(NSError *)arg3;
- (void)session:(SHRecognitionSession *)arg1 didFindMatch:(SHMatch *)arg2;

@optional
- (void)session:(SHRecognitionSession *)arg1 didNotFindMatchforSignature:(SHSignature *)arg2 needsMinimumSignatureLength:(double)arg3;
- (void)session:(SHRecognitionSession *)arg1 didNotFindMatchForSignature:(SHSignature *)arg2;
- (void)session:(SHRecognitionSession *)arg1 willMatch:(SHSignature *)arg2;
@end

