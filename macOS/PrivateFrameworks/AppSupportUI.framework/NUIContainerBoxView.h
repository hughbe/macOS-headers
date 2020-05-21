//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppSupportUI/NUIContainerView.h>

#import <AppSupportUI/_NUIBoxArrangementContainer-Protocol.h>

@class NSString;

@interface NUIContainerBoxView : NUIContainerView <_NUIBoxArrangementContainer>
{
    struct _NUIBoxArrangement _arrangement;
    CDStruct_e0b918f9 _boxFlags;
}

+ (id)containerBoxViewWithArrangedSubviews:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)debugDictionary;
- (id)arrangedDescription;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect)arg1;
- (struct CGSize)calculateArrangedSizeFittingSize:(struct CGSize)arg1;
- (BOOL)setNeedsInvalidation:(long long)arg1;
- (void)populateBoxArrangementCells:(vector_eb457d57 *)arg1;
- (long long)_effectiveAlignmentForArrangedSubview:(id)arg1 inAxis:(long long)arg2;
- (id)calculateViewForLastBaselineLayout;
- (id)calculateViewForFirstBaselineLayout;
@property(nonatomic) long long verticalAlignment;
@property(nonatomic) long long horizontalAlignment;
- (void)dealloc;
- (id)initWithArrangedSubviews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

