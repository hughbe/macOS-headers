//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMContactInBanner : NSObject
{
    PETScalarEventTracker *_tracker;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMBannerDisplayApp_)arg2 extracted:(struct SGMBannerExtractionType_)arg3 selfId:(struct SGMTypeSafeBool_)arg4 extractionModelVersion:(unsigned long long)arg5 contactDetail:(struct SGMContactDetailType_)arg6;
- (id)init;

@end

