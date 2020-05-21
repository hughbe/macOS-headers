//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface ICNotePreviewGenerator : NSObject
{
    BOOL _suspended;
    NSOperationQueue *_operationQueue;
}

+ (id)sharedGenerator;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic, getter=isSuspended) BOOL suspended; // @synthesize suspended=_suspended;
- (id)renderPreviewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6;
- (id)previewURLForNote:(id)arg1;
- (void)previewImageWithDrawingAttachment:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)drawingAttachmentAtStartOfNote:(id)arg1;
- (id)previewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)fetchPreviewImageForNote:(id)arg1 minSize:(struct CGSize)arg2 scale:(double)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)init;

@end

