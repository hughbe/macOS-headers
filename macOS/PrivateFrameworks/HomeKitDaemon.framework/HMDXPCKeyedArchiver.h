//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSKeyedArchiver;

@interface HMDXPCKeyedArchiver : HMFObject
{
    NSKeyedArchiver *_archiver;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSKeyedArchiver *archiver; // @synthesize archiver=_archiver;
- (id)encodedData;
- (void)finishEncoding;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_configure;
- (void)dealloc;
- (id)initForWritingWithMessage:(id)arg1;

@end

