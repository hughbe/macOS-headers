//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDate.h>

#import <AssistantServices/AFSecurityDigestibleChunksProviding-Protocol.h>

@class NSString;

@interface NSDate (AFSecurityDigestibleChunksProvider) <AFSecurityDigestibleChunksProviding>
- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)af_isTomorrow;
- (BOOL)af_isToday;
- (BOOL)_af_isSameDayAsDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

