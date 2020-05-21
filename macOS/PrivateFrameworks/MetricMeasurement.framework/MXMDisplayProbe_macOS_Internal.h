//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetricMeasurement/MXMDisplayProbePlatform-Protocol.h>

@class MXMDisplayDescriptor, NSString;
@protocol MXMDisplayProbePlatformDelegate;

@interface MXMDisplayProbe_macOS_Internal : NSObject <MXMDisplayProbePlatform>
{
    struct CGDisplayStream *_stream;
    MXMDisplayDescriptor *_target;
    id <MXMDisplayProbePlatformDelegate> _delegate;
}

+ (id)_allDescriptors;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MXMDisplayProbePlatformDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initPrivateWithDescriptor:(id)arg1 queue:(id)arg2;
- (void)_stop;
- (void)_start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

