//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface VolumePolicyMOFetchUtil : NSObject
{
    NSManagedObjectContext *mManagedObjectContext;
}

+ (struct VolumeCapabilites)decodeVolumeCapabilities:(id)arg1;
+ (id)encodeVolumeCapabilities:(const struct VolumeCapabilites *)arg1;
+ (optional_b0ed8b79)getVolumeModeForString:(id)arg1;
+ (id)getStringForVolumeMode:(int)arg1;
+ (optional_f29defcb)getTransferFunctionForString:(id)arg1;
+ (id)getStringForTransferFunction:(int)arg1;
- (void).cxx_destruct;
- (id)fetchAllWithPortType:(id)arg1;
- (id)fetchWithPortType:(id)arg1;
- (id)initWithManagedObjectContext:(id)arg1;

@end

