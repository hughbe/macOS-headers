//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Install/PFCommon.h>

@interface PFReceipt : PFCommon
{
}

+ (id)receiptForFile:(const char *)arg1 onVolumeOrHomeDir:(id)arg2 forClass:(id)arg3;
+ (id)receiptForFile:(const char *)arg1 onVolumeOrHomeDir:(id)arg2;
+ (id)fileInReceipt:(const char *)arg1 onVolumeOrHomeDir:(id)arg2 forClass:(id)arg3;
+ (id)receiptForIdentifier:(id)arg1 withObject:(id)arg2 onVolumeOrHomeDir:(id)arg3 forClass:(id)arg4 error:(id *)arg5;
+ (id)receiptForIdentifier:(id)arg1 withObject:(id)arg2 onVolumeOrHomeDir:(id)arg3 error:(id *)arg4;
+ (BOOL)receiptExistsForIdentifier:(id)arg1 withObject:(id)arg2 onVolumeOrHomeDir:(id)arg3;
+ (id)receiptIdentifiersForVolume:(id)arg1 forClass:(id)arg2;
+ (id)receiptIdentifiersForVolume:(id)arg1;
+ (id)receiptWithModule:(id)arg1 andID:(id)arg2 context:(id)arg3 onVolumeOrHomeDir:(id)arg4 error:(id *)arg5;
- (id)initWithModule:(id)arg1 andID:(id)arg2 context:(id)arg3 onVolumeOrHomeDir:(id)arg4 error:(id *)arg5;

@end

