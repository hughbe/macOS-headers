//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDAnchor.h>

__attribute__((visibility("hidden")))
@interface EDOneCellAnchor : EDAnchor
{
    struct EDCellAnchorMarker mFrom;
    struct CGSize mSize;
    BOOL mIsRelative;
}

- (id).cxx_construct;
- (void)setRelative:(BOOL)arg1;
- (BOOL)isRelative;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)setFrom:(struct EDCellAnchorMarker)arg1;
- (struct EDCellAnchorMarker)from;

@end

