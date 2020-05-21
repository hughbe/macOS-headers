//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IMKCandidateListDictionary;
@protocol IMKUICandidateControllerDelegate;

@protocol IMKUIAbstractCandidateController
@property(nonatomic) __weak id <IMKUICandidateControllerDelegate> delegate;
@property(retain, nonatomic) IMKCandidateListDictionary *candidateGroups;
- (void)didShowCandidates;
- (void)updateVisualElements;
- (void)updateLayout;
- (void)willShowCandidates;
- (void)showCandidates;
@end

