//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <CoreSuggestionsUI/SGSuggestionPresenterDelegate-Protocol.h>

@class NSString, SGFoundInSuggestionPresenter;

@interface SGFoundInSuggestionViewController : NSViewController <SGSuggestionPresenterDelegate>
{
    SGFoundInSuggestionPresenter *_presenter;
}

- (void).cxx_destruct;
@property(readonly) SGFoundInSuggestionPresenter *presenter; // @synthesize presenter=_presenter;
- (void)suggestionPresenterWantsToHideBanner:(id)arg1;
- (void)suggestionPresenterWantsToShowBanner:(id)arg1;
- (id)nibBundle;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

