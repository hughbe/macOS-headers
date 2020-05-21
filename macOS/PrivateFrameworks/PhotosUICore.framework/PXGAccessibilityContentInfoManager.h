//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXGMutableAccessibilityContentInfoManager-Protocol.h>

@class NSArray, NSString;

@interface PXGAccessibilityContentInfoManager : PXObservable <PXGMutableAccessibilityContentInfoManager>
{
    NSArray *_visibleAccessibilityContentInfos;
    NSArray *_extendedAccessibilityContentInfos;
    NSArray *_extendedAccessibilityGroupContentInfos;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *extendedAccessibilityGroupContentInfos; // @synthesize extendedAccessibilityGroupContentInfos=_extendedAccessibilityGroupContentInfos;
@property(readonly, nonatomic) NSArray *extendedAccessibilityContentInfos; // @synthesize extendedAccessibilityContentInfos=_extendedAccessibilityContentInfos;
@property(readonly, nonatomic) NSArray *visibleAccessibilityContentInfos; // @synthesize visibleAccessibilityContentInfos=_visibleAccessibilityContentInfos;
- (void)setExtendedAccessibilityGroupContentInfos:(id)arg1;
- (void)setExtendedAccessibilityContentInfos:(id)arg1;
- (void)setVisibleAccessibilityContentInfos:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

