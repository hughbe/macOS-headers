//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/MFRegion.h>

@class OITSUBezierPath;

__attribute__((visibility("hidden")))
@interface MFPhoneRegion : MFRegion
{
    OITSUBezierPath *m_path;
    struct CGRect m_bounds;
}

- (void).cxx_destruct;
- (int)invert:(id)arg1;
- (int)frame:(id)arg1 in_brush:(id)arg2;
- (int)fill:(id)arg1 in_brush:(id)arg2;
- (id)pathForClippingWithDeviceContext:(id)arg1;
- (id)initWithPath:(id)arg1 in_bounds:(struct CGRect)arg2;
- (id)initWithRects:(id)arg1 in_bounds:(struct CGRect)arg2 in_dc:(id)arg3;

@end

