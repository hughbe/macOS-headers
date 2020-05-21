//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NSCopying><NSObject;

@interface MFCacheDeleteAttachmentPurger : NSObject
{
    int _urgency;
    id <NSCopying><NSObject> _volumeIdentifier;
    NSString *_errorMessage;
    unsigned long long _totalBytesPurged;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long totalBytesPurged; // @synthesize totalBytesPurged=_totalBytesPurged;
@property(copy, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(readonly, nonatomic) int urgency; // @synthesize urgency=_urgency;
@property(readonly, copy, nonatomic) id <NSCopying><NSObject> volumeIdentifier; // @synthesize volumeIdentifier=_volumeIdentifier;
- (BOOL)_deleteAttachmentFile:(id)arg1;
- (id)_purgeQueue;
- (void)_attachmentsForAccounts:(id)arg1 startTimeInterval:(double)arg2 endTimeInterval:(double)arg3 withBlock:(CDUnknownBlockType)arg4;
- (long long)_monthsToKeepRecentAttachments;
- (void)_attachmentsForAccounts:(id)arg1 minimumCachePolicy:(long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)_activeAccountsByCachePolicy:(id *)arg1 inactiveAccountsByCachePolicy:(id *)arg2;
- (id)_sharedAccountStore;
- (unsigned long long)purgeWithRequestedBytes:(unsigned long long)arg1 outErrorMessage:(id *)arg2;
@property(readonly, nonatomic) unsigned long long purgeableBytesAvailable;
- (unsigned long long)additionalPurgeableBytesAvailableByChangingCachePolicyTo:(long long)arg1;
- (id)init;
- (id)initWithVolumeIdentifier:(id)arg1 urgency:(int)arg2;

@end

