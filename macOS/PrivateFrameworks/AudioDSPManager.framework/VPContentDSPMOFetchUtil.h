//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface VPContentDSPMOFetchUtil : NSObject
{
    NSManagedObjectContext *mManagedObjectContext;
}

- (void).cxx_destruct;
- (id)fetchAllWithCategory:(id)arg1 mode:(id)arg2 dspFlavor:(id)arg3 isInput:(id)arg4 portType:(id)arg5 vpOperationMode:(id)arg6 vocoderSampleRate:(id)arg7 hwHasVP:(id)arg8;
- (id)fetchWithCategory:(id)arg1 mode:(id)arg2 dspFlavor:(id)arg3 isInput:(id)arg4 portType:(id)arg5 vpOperationMode:(id)arg6 vocoderSampleRate:(id)arg7 hwHasVP:(id)arg8;
- (id)initWithManagedObjectContext:(id)arg1;

@end

