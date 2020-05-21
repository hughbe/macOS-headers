//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SiriVOX/SVXServiceCommandHandling-Protocol.h>

@class NSString, SVXServiceCommandResult;

@interface SVXServiceCommandHandlerFallback : NSObject <SVXServiceCommandHandling>
{
    SVXServiceCommandResult *_result;
}

+ (Class)supportedCommandClass;
- (void).cxx_destruct;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)isCommandUUFR:(id)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithResult:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

