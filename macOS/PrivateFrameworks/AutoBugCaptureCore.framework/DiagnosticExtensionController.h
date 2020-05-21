//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface DiagnosticExtensionController : NSObject
{
    NSDateFormatter *dateFormatter;
    NSString *destinationRootDirectory;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensionsWithParameters:(id)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)collectDEPayloadsWithIdentifier:(id)arg1 diagnosticExtensions:(id)arg2 queue:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)initWithDestinationDirectory:(id)arg1;

@end

