//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSBiometricsSignatureRequest;

__attribute__((visibility("hidden")))
@interface AMSBiometricsSignatureTask : AMSTask
{
    AMSBiometricsSignatureRequest *_request;
}

- (void).cxx_destruct;
@property(readonly) AMSBiometricsSignatureRequest *request; // @synthesize request=_request;
- (id)performSignature;
- (id)initWithRequest:(id)arg1;

@end

