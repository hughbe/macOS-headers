//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCMMActionPerformer.h>

@class NSURL;

@interface PXCMMPublishActionPerformer : PXCMMActionPerformer
{
    NSURL *_publishedURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *publishedURL; // @synthesize publishedURL=_publishedURL;
- (void)cancelActionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)isCancellable;
- (void)_completePublishActionWithSuccess:(BOOL)arg1 error:(id)arg2 shareOrigin:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)performPublishActionWithWindow:(id)arg1 session:(id)arg2 shareOrigin:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)createActionProgress;

@end

