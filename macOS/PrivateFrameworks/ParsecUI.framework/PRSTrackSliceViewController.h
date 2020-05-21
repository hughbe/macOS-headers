//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ParsecUI/PRSSliceViewController.h>

#import <ParsecUI/NSSoundDelegate-Protocol.h>

@class NSSound, NSString, SFTrack;

@interface PRSTrackSliceViewController : PRSSliceViewController <NSSoundDelegate>
{
    SFTrack *_track;
    NSSound *_playingSound;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain) NSSound *playingSound; // @synthesize playingSound=_playingSound;
@property(readonly) SFTrack *track; // @synthesize track=_track;
- (void)sound:(id)arg1 didFinishPlaying:(BOOL)arg2;
- (void)viewClosed;
- (void)togglePlaying:(id)arg1;
- (void)startedPlaying:(id)arg1;
- (id)trackSliceView;
- (void)syncAttributes;
- (BOOL)handleMouseUp:(id)arg1 alternatePunchout:(id)arg2;
- (void)setAdditionalHeight:(double)arg1;
- (double)height;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithTrack:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

