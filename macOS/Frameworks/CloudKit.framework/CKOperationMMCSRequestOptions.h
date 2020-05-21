//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@interface CKOperationMMCSRequestOptions : NSObject <NSSecureCoding>
{
    BOOL _resumableContainerLimpMode;
    BOOL _chunkingLibraryCorruptionMode;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL chunkingLibraryCorruptionMode; // @synthesize chunkingLibraryCorruptionMode=_chunkingLibraryCorruptionMode;
@property(nonatomic) BOOL resumableContainerLimpMode; // @synthesize resumableContainerLimpMode=_resumableContainerLimpMode;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

