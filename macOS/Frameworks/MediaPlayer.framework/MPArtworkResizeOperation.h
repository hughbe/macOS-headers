//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSImage, NSObject, NSURL;
@protocol OS_dispatch_group;

@interface MPArtworkResizeOperation : NSOperation
{
    BOOL _usesExactFittingSizeAsDestinationSize;
    NSImage *_resizedImage;
    NSError *_error;
    NSURL *_destinationURL;
    NSObject<OS_dispatch_group> *_operationGroup;
    NSImage *_image;
    struct CGSize _scaledFittingSize;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL usesExactFittingSizeAsDestinationSize; // @synthesize usesExactFittingSizeAsDestinationSize=_usesExactFittingSizeAsDestinationSize;
@property(nonatomic) struct CGSize scaledFittingSize; // @synthesize scaledFittingSize=_scaledFittingSize;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) NSObject<OS_dispatch_group> *operationGroup; // @synthesize operationGroup=_operationGroup;
@property(readonly, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSImage *resizedImage; // @synthesize resizedImage=_resizedImage;
- (struct CGSize)_resizedScaledSizeForScaledImageSize:(struct CGSize)arg1 scaledFittingSize:(struct CGSize)arg2;
- (void)main;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 useExactFittingSizeAsDestinationSize:(BOOL)arg3 destinationURL:(id)arg4;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2 destinationURL:(id)arg3;
- (id)initWithImage:(id)arg1 scaledFittingSize:(struct CGSize)arg2;

@end

