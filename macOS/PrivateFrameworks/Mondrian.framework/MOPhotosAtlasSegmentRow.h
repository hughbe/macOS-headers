//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MOPhotosAtlasSegment;

@interface MOPhotosAtlasSegmentRow : NSObject
{
    MOPhotosAtlasSegment *_segment;
    struct _NSRange _range;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, retain, nonatomic) MOPhotosAtlasSegment *segment; // @synthesize segment=_segment;
- (struct CGRect)imageContentsRect;
- (id)imageRef;
- (id)invalidIndexes;
- (BOOL)isComplete;
- (id)mediaItems;
- (id)initWithSegment:(id)arg1 range:(struct _NSRange)arg2;

@end

