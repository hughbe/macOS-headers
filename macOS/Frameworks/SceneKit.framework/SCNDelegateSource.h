//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SceneKit/SCNImageSource.h>

__attribute__((visibility("hidden")))
@interface SCNDelegateSource : SCNImageSource
{
    id _delegate;
}

@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (BOOL)isOpaque;
- (id)textureSource;
- (void)dealloc;

@end

