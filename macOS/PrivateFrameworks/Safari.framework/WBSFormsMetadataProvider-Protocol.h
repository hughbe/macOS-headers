//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Safari/NSObject-Protocol.h>

@protocol WBSFormsMetadataProvider <NSObject>
@property(readonly, nonatomic) unsigned long long formCount;
- (void)enumerateFormsUsingBlock:(void (^)(struct OpaqueFormAutoFillFrame *, WBSFormMetadata *, char *))arg1;
@end

