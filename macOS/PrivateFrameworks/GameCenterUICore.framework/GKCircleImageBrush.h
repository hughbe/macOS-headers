//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUICore/GKImageBrush.h>

#import <GameCenterUICore/GKBrushIdentification-Protocol.h>

@class NSString;

@interface GKCircleImageBrush : GKImageBrush <GKBrushIdentification>
{
    struct CGSize _sizeOverride;
}

@property(nonatomic) struct CGSize sizeOverride; // @synthesize sizeOverride=_sizeOverride;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;
- (double)scaleForInput:(id)arg1;
- (struct CGSize)sizeForInput:(id)arg1;
- (id)renderedImageIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

