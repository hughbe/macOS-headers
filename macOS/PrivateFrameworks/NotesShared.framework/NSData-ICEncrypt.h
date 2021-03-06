//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@class NSString;

@interface NSData (ICEncrypt)
+ (id)ic_random128BitData:(id *)arg1;
+ (id)ic_randomDataOfLength:(unsigned long long)arg1 error:(id *)arg2;
+ (id)ic_keyWithUserPassphrase:(id)arg1 salt:(id)arg2 iterationCount:(unsigned int)arg3 error:(id *)arg4;
- (BOOL)checkDataIntegrityWithTagData:(id)arg1 inputTag:(id)arg2 error:(id *)arg3;
- (id)ic_unwrapWithKey:(id)arg1 error:(id *)arg2;
- (id)ic_wrapWithKey:(id)arg1 error:(id *)arg2;
- (id)ic_decryptedDataWithKey:(id)arg1 tag:(id)arg2 initialVector:(id)arg3 error:(id *)arg4;
- (id)ic_encryptedDataWithKey:(id)arg1 tag:(id *)arg2 initialVector:(id *)arg3 error:(id *)arg4;
- (id)ic_stringValue;
@property(readonly, nonatomic) NSString *ic_md5;
- (id)TT_gzipDeflate;
- (id)TT_gzipInflate;
@end

