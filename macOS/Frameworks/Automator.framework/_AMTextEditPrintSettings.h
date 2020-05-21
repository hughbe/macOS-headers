//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScriptingBridge/SBObject.h>

@class NSDate, NSString;

@interface _AMTextEditPrintSettings : SBObject
{
}

- (void)saveAs:(id)arg1 in:(id)arg2;
- (void)moveTo:(id)arg1;
- (BOOL)exists;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(copy) NSString *targetPrinter;
@property(copy) NSString *faxNumber;
@property int errorHandling;
@property(copy) NSDate *requestedPrintTime;
@property long long pagesDown;
@property long long pagesAcross;
@property long long endingPage;
@property long long startingPage;
@property BOOL collating;
@property long long copies;

@end

