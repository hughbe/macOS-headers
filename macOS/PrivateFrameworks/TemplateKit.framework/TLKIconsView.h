//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TemplateKit/TLKStackView.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TLKIconsView : TLKStackView
{
    NSMutableArray *_imageViews;
    unsigned long long _prominence;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long prominence; // @synthesize prominence=_prominence;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
- (void)updateIcons:(id)arg1;
- (id)init;

@end

