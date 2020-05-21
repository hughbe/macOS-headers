//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppKit/NSHMDMetalSessionDrawable-Protocol.h>

@class NSHMDIOSurfaceDrawable, NSHMDMetalSession, NSString;
@protocol MTLTexture;

__attribute__((visibility("hidden")))
@interface NSHMDMetalSessionDrawable : NSObject <NSHMDMetalSessionDrawable>
{
    NSHMDMetalSession *_session;
    NSHMDIOSurfaceDrawable *_drawable;
}

- (void)addPresentedHandler:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) double presentedTime;
- (void)presentAfterMinimumDuration:(double)arg1;
- (void)presentAtTime:(double)arg1;
- (void)present;
@property(readonly, nonatomic) unsigned long long drawableID;
@property(readonly) id <MTLTexture> texture;
- (void)presentAtTimestamp:(double)arg1;
@property unsigned long long debugSignpost;
@property double inputTimeStamp;
@property(readonly) NSHMDMetalSession *session;
- (void)dealloc;
- (id)initWithSession:(id)arg1 surfaceDrawable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

