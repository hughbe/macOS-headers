//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

#import <HomeKitBackingStore/HMBQueryableModelFieldCoder-Protocol.h>

@class NSString;

@interface NSData (HMB) <HMBQueryableModelFieldCoder>
+ (id)hmbDescriptionForEncodedQueryableVariable:(id)arg1;
+ (id)hmbDecodeQueryableParameter:(id)arg1;
+ (id)hmbEncodeQueryableParameter:(id)arg1;
+ (id)hmbDataWithSQLite3Column:(struct sqlite3_stmt *)arg1 column:(int)arg2;
+ (id)hmbDataWithSQLite3ColumnNoCopy:(struct sqlite3_stmt *)arg1 column:(int)arg2;
@property(readonly, copy) NSString *hmbDescription;
- (id)hmbUncompress;
- (id)hmbCompress;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

