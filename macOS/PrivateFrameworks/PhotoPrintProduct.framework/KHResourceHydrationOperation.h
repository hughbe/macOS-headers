//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSBlockOperation.h>

@class NSArray, NSProgress;

@interface KHResourceHydrationOperation : NSBlockOperation
{
    BOOL _internalIsCancelled;
    NSProgress *_progress;
    NSArray *_errors;
    CDUnknownBlockType _progressWasSetBlockDelegate;
    CDUnknownBlockType _errorsWereSetBlockDelegate;
    CDUnknownBlockType _cancelBlockDelegate;
    id _hydrationResult;
    id _hydrationResultActivity;
}

+ (id)photoCachesWarmupOperationWithProject:(id)arg1;
+ (BOOL)needsPrintsPreparationOperation;
+ (id)printsPreparationOperation;
+ (id)projectCreationOperationWithInfo:(id)arg1;
+ (id)themeHydrationOperationForProvider:(id)arg1;
- (void).cxx_destruct;
@property BOOL internalIsCancelled; // @synthesize internalIsCancelled=_internalIsCancelled;
@property(retain) id hydrationResultActivity; // @synthesize hydrationResultActivity=_hydrationResultActivity;
@property(retain) id hydrationResult; // @synthesize hydrationResult=_hydrationResult;
@property(copy) CDUnknownBlockType cancelBlockDelegate; // @synthesize cancelBlockDelegate=_cancelBlockDelegate;
@property(copy) CDUnknownBlockType errorsWereSetBlockDelegate; // @synthesize errorsWereSetBlockDelegate=_errorsWereSetBlockDelegate;
@property(copy) CDUnknownBlockType progressWasSetBlockDelegate; // @synthesize progressWasSetBlockDelegate=_progressWasSetBlockDelegate;
@property(retain) NSArray *errors; // @synthesize errors=_errors;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
- (void)cancel;

@end

