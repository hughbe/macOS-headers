//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol MKInfoCardTheme, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewAvatarGenerator : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableDictionary *_cachedMaskedImages;
    id <MKInfoCardTheme> _theme;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKInfoCardTheme> theme; // @synthesize theme=_theme;
- (void)avatarForReview:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)monogramForReviewerName:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

