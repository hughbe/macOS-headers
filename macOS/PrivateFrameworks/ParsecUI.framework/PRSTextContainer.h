//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTextContainer.h>

@interface PRSTextContainer : NSTextContainer
{
    struct CGSize _exclusionMargin;
    struct CGRect _exclusionRect;
}

@property struct CGRect exclusionRect; // @synthesize exclusionRect=_exclusionRect;
@property struct CGSize exclusionMargin; // @synthesize exclusionMargin=_exclusionMargin;
- (struct CGRect)lineFragmentRectForProposedRect:(struct CGRect)arg1 sweepDirection:(unsigned long long)arg2 movementDirection:(unsigned long long)arg3 remainingRect:(struct CGRect *)arg4;
- (BOOL)widthTracksTextView;
- (BOOL)isSimpleRectangularTextContainer;
- (id)initWithContainerSize:(struct CGSize)arg1;

@end

