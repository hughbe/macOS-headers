//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PBOXRemoteMediaBrowserPanel;

@interface ILMBRemoteMediaBrowserPanel : NSObject
{
    PBOXRemoteMediaBrowserPanel *_browserPanel;
}

+ (id)sharedInstance;
- (void)setAutosaveName:(id)arg1;
- (id)autosaveName;
- (void)setBrowserType:(unsigned long long)arg1;
- (unsigned long long)browserType;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGRect)frame;
- (void)hidePanel;
- (void)showPanel;
- (void)toggle;
- (id)init;

@end

