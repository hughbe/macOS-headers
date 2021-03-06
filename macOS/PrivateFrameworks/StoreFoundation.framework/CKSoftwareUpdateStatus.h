//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreFoundation/NSSecureCoding-Protocol.h>

@class NSError;

@interface CKSoftwareUpdateStatus : NSObject <NSSecureCoding>
{
    BOOL _canCancel;
    long long _state;
    unsigned long long _bytesDownloaded;
    unsigned long long _bytesTotal;
    double _percentComplete;
    double _estimatedTimeRemaining;
    NSError *_error;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) BOOL canCancel; // @synthesize canCancel=_canCancel;
@property(readonly, nonatomic) double estimatedTimeRemaining; // @synthesize estimatedTimeRemaining=_estimatedTimeRemaining;
@property(readonly, nonatomic) double percentComplete; // @synthesize percentComplete=_percentComplete;
@property(readonly, nonatomic) unsigned long long bytesTotal; // @synthesize bytesTotal=_bytesTotal;
@property(readonly, nonatomic) unsigned long long bytesDownloaded; // @synthesize bytesDownloaded=_bytesDownloaded;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithProgress:(double)arg1 statusInfo:(id)arg2 canCancel:(BOOL)arg3;

@end

