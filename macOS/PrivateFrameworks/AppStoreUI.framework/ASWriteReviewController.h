//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ASWriteReviewConfiguration, ASWriteReviewWindowController;

@interface ASWriteReviewController : NSObject
{
    ASWriteReviewConfiguration *_configuration;
    ASWriteReviewWindowController *_reviewWindowController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ASWriteReviewWindowController *reviewWindowController; // @synthesize reviewWindowController=_reviewWindowController;
@property(retain, nonatomic) ASWriteReviewConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)startWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

