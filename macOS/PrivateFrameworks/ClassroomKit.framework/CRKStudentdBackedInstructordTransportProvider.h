//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKTransportProviding-Protocol.h>

@class NSString, NSURL;
@protocol CRKRequestPerformingProtocol;

@interface CRKStudentdBackedInstructordTransportProvider : NSObject <CRKTransportProviding>
{
    id <CRKRequestPerformingProtocol> _studentDaemonProxy;
    NSURL *_classroomAppBundleURL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *classroomAppBundleURL; // @synthesize classroomAppBundleURL=_classroomAppBundleURL;
@property(retain, nonatomic) id <CRKRequestPerformingProtocol> studentDaemonProxy; // @synthesize studentDaemonProxy=_studentDaemonProxy;
- (void)fetchTransportOperationDidFinish:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchTransportWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithStudentDaemonProxy:(id)arg1 classroomAppBundleURL:(id)arg2;
- (id)initWithStudentDaemonProxy:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

