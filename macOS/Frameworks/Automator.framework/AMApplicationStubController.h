//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AMLocalRunnerController, NSMutableArray;

@interface AMApplicationStubController : NSObject
{
    AMLocalRunnerController *_runnerController;
    NSMutableArray *_queuedInputByURL;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *queuedInputByURL; // @synthesize queuedInputByURL=_queuedInputByURL;
@property(retain) AMLocalRunnerController *runnerController; // @synthesize runnerController=_runnerController;
- (void)exitOrContinueIfNeeded;
- (void)executeNextQueuedInput;
- (void)presentError:(id)arg1 terminating:(BOOL)arg2;
- (id)recoverableErrorForError:(id)arg1;
- (BOOL)runWorkflowAtURL:(id)arg1 withInput:(id)arg2 error:(id *)arg3;
- (BOOL)validateWorkflowAtURL:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) BOOL stayOpen;
- (id)init;

@end

