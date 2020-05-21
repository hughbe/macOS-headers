//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, PDSlideMaster;

__attribute__((visibility("hidden")))
@interface PBMasterInfo : NSObject
{
    PDSlideMaster *mSlideMaster;
    NSMutableArray *mTgtSlideLayoutArray;
    unsigned int mMainPbRef;
    unsigned int mTitlePbRef;
    NSDictionary *mLayoutMap;
    ChVector_7fbb5a88 *mSrcTextStyling;
    unsigned int mXmlMainMasterId;
    NSMutableDictionary *mXmlLayoutMap;
    BOOL mUseXmlBlobs;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL useXmlBlobs; // @synthesize useXmlBlobs=mUseXmlBlobs;
@property(nonatomic) unsigned int xmlMainMasterId; // @synthesize xmlMainMasterId=mXmlMainMasterId;
- (id)uniqueXmlSlideLayout;
- (id)slideLayoutForXmlLayoutId:(unsigned short)arg1;
- (void)setSlideLayout:(id)arg1 forXmlLayoutId:(unsigned short)arg2;
- (ChVector_7fbb5a88 *)sourceTextStyling;
- (id)slideLayoutForSlideHolder:(id)arg1;
- (void)cacheSlideLayouts;
- (id)allTargetLayoutTypes;
- (void)cacheTargetLayoutType:(int)arg1;
- (unsigned int)titlePbRef;
- (void)setTitlePbRef:(unsigned int)arg1;
- (unsigned int)mainPbRef;
- (void)setMainPbRef:(unsigned int)arg1;
- (id)slideMaster;
- (void)setSlideMaster:(id)arg1;
- (void)dealloc;
- (id)init;

@end

