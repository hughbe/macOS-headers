//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDSlide;

__attribute__((visibility("hidden")))
@interface PBSlideObjAndMasterPair : NSObject
{
    PDSlide *mSlide;
    int mMasterId;
}

+ (id)createPair:(id)arg1 masterId:(int)arg2;
- (void).cxx_destruct;
- (int)masterId;
- (id)slide;
- (void)setSlide:(id)arg1 masterId:(int)arg2;

@end

