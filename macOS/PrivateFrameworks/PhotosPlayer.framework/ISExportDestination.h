//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface ISExportDestination : NSObject
{
    NSURL *_photoURL;
    NSURL *_videoURL;
}

+ (id)destinationWithPhotoURL:(id)arg1 videoURL:(id)arg2;
- (void).cxx_destruct;
@property(readonly) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly) NSURL *photoURL; // @synthesize photoURL=_photoURL;
- (id)initWithPhotoURL:(id)arg1 videoURL:(id)arg2;

@end

