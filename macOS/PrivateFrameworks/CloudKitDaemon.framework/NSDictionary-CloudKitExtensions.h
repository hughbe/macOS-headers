//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import <CloudKitDaemon/CKLParsedObject-Protocol.h>

@class NSString;

@interface NSDictionary (CloudKitExtensions) <CKLParsedObject>
- (id)CKObjectForKeyCaseInsensitive:(id)arg1;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (id)CKPercentEscapedQueryString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

