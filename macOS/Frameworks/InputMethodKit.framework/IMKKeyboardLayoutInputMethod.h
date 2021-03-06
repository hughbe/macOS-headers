//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InputMethodKit/IMKAbstractInputMethod.h>

@interface IMKKeyboardLayoutInputMethod : IMKAbstractInputMethod
{
    BOOL _showsPanelWhenScrubbing;
    BOOL _didStartScrubberTimer;
}

@property(nonatomic) BOOL didStartScrubberTimer; // @synthesize didStartScrubberTimer=_didStartScrubberTimer;
@property BOOL showsPanelWhenScrubbing; // @synthesize showsPanelWhenScrubbing=_showsPanelWhenScrubbing;
- (void)showCandidatesOnKeyboardFor:(id)arg1 withKeyboardState:(id)arg2;
- (void)candidateMenuDidFinishInteracting:(id)arg1;
- (void)candidateMenu:(id)arg1 didSelectCandidate:(id)arg2;
- (void)candidateMenu:(id)arg1 didChangeFocusTo:(id)arg2;
- (void)hideScrubber;
- (void)showScrubber;
- (void)dealloc;
- (id)initWithKeyboardToAttach:(id)arg1 inputMethodToChain:(id)arg2;

@end

