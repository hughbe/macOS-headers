//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/NSObject-Protocol.h>

@protocol NUIArrangementItem <NSObject>
- (float)contentHuggingPriorityForAxis:(long long)arg1;
- (float)contentCompressionResistancePriorityForAxis:(long long)arg1;
- (double)effectiveBaselineOffsetFromContentBottom;
- (double)effectiveFirstBaselineOffsetFromContentTop;
- (BOOL)isLayoutSizeDependentOnPerpendicularAxis;
@end

