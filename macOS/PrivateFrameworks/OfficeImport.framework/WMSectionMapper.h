//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMMapper.h>

@class WDSection;

__attribute__((visibility("hidden")))
@interface WMSectionMapper : CMMapper
{
    WDSection *wdSection;
    float mTopMargin;
    float mLeftMargin;
    BOOL mBreakAtStart;
    BOOL mBreakAtEnd;
    BOOL mIsTitlePage;
}

+ (BOOL)isContentEmpty:(id)arg1;
- (void).cxx_destruct;
- (float)leftMargin;
- (void)setLeftMargin:(float)arg1;
- (float)topMargin;
- (void)setTopMargin:(float)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (void)MapSectionStyleAt:(id)arg1;
- (id)initWithWDSection:(id)arg1 breakAtStart:(BOOL)arg2 breakAtEnd:(BOOL)arg3 parent:(id)arg4;
- (void)mapFooterAt:(id)arg1 withState:(id)arg2;
- (void)mapHeaderAt:(id)arg1 withState:(id)arg2;

@end

