//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMApplicationStubController;

@interface AMApplicationStub : NSObject
{
    id _applicationStubController;
}

- (void).cxx_destruct;
@property(retain) AMApplicationStubController *applicationStubController; // @synthesize applicationStubController=_applicationStubController;
- (BOOL)runWorkflowAtPath:(id)arg1 withInput:(id)arg2 error:(id *)arg3;
- (BOOL)loadWorkflowAtPath:(id)arg1 error:(id *)arg2;
- (void)_presentRecoverableErrorAndTerminateIfNeeded:(id)arg1;
@property(readonly, nonatomic) BOOL stayOpen;
@property(nonatomic) BOOL displayInMenuBar;
- (id)init;

@end

