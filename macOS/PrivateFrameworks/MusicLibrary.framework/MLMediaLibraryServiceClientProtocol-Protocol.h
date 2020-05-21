//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MusicLibrary/NSObject-Protocol.h>

@class NSError, NSUUID;

@protocol MLMediaLibraryServiceClientProtocol <NSObject>
- (void)importOperationWithIdentifier:(NSUUID *)arg1 didUpdateWithProgress:(float)arg2;
- (void)serviceTerminatedTransactionWithIdentifier:(NSUUID *)arg1 error:(NSError *)arg2;
@end

