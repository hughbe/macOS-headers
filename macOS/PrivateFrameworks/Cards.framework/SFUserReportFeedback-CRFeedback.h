//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFUserReportFeedback.h>

#import <Cards/CRUserReportRequestFeedback-Protocol.h>

@class NSString, SFFeedback;

@interface SFUserReportFeedback (CRFeedback) <CRUserReportRequestFeedback>
@property(readonly, nonatomic) SFFeedback *backingFeedback;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

