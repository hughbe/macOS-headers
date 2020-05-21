//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class ASWriteReviewConfiguration, ASWriteReviewRateView;

@interface ASRateViewController : NSViewController
{
    BOOL _hasActiveRequest;
    CDUnknownBlockType _completionBlock;
    ASWriteReviewConfiguration *_configuration;
}

+ (struct CGSize)preferredSizeForConfiguration:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasActiveRequest; // @synthesize hasActiveRequest=_hasActiveRequest;
@property(retain, nonatomic) ASWriteReviewConfiguration *configuration; // @synthesize configuration=_configuration;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) ASWriteReviewRateView *rateView;
- (void)updateControls;
- (void)configureDialogView:(id)arg1;
- (void)loadView;
- (id)initWithConfiguration:(id)arg1;

@end

