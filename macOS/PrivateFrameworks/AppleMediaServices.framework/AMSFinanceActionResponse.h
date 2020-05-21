//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSFinancePerformable-Protocol.h>

@class ACAccount, AMSURLTaskInfo, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface AMSFinanceActionResponse : NSObject <AMSFinancePerformable>
{
    ACAccount *_account;
    NSString *_creditString;
    long long _kind;
    AMSURLTaskInfo *_taskInfo;
    NSURL *_URL;
}

+ (id)actionWithUpdatedCreditString:(id)arg1 account:(id)arg2 taskInfo:(id)arg3;
+ (id)actionWithActionDictionary:(id)arg1 taskInfo:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(retain) AMSURLTaskInfo *taskInfo; // @synthesize taskInfo=_taskInfo;
@property long long kind; // @synthesize kind=_kind;
@property(retain) NSString *creditString; // @synthesize creditString=_creditString;
@property(retain) ACAccount *account; // @synthesize account=_account;
- (id)_performOpenURL;
- (id)_performGotoURL;
- (id)_performCreditDisplayUpdate;
- (id)performWithTaskInfo:(id)arg1;
- (id)initWithTaskInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

