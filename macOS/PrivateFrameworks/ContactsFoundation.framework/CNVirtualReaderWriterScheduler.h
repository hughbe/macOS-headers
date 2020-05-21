//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNReaderWriterScheduler-Protocol.h>

@class CNSuspendableSchedulerDecorator, NSString;

@interface CNVirtualReaderWriterScheduler : NSObject <CNReaderWriterScheduler>
{
    CNSuspendableSchedulerDecorator *_scheduler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler; // @synthesize scheduler=_scheduler;
- (void)resume;
- (void)suspend;
- (void)performSynchronousWriterBlock:(CDUnknownBlockType)arg1;
- (void)performSynchronousReaderBlock:(CDUnknownBlockType)arg1;
- (id)performWriterBlock:(CDUnknownBlockType)arg1;
- (id)performReaderBlock:(CDUnknownBlockType)arg1;
- (id)initWithScheduler:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

