//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (HPDAdditions)
+ (id)hpd_dataFromHexString:(id)arg1;
- (id)hpd_hexString;
- (id)hpd_decompressedDataUsingAlgorithm:(int)arg1;
- (id)hpd_compressedDataUsingAlgorithm:(int)arg1;
- (id)hpd_dataUsingCompressionAlgorithm:(int)arg1 operation:(int)arg2;
@end

