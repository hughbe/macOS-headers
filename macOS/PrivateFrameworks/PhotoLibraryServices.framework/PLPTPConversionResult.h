//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPTPConversionResult : NSObject
{
    NSString *_pathExtension;
    unsigned long long _estimatedFileLength;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long estimatedFileLength; // @synthesize estimatedFileLength=_estimatedFileLength;
@property(readonly, copy) NSString *pathExtension; // @synthesize pathExtension=_pathExtension;
- (id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2;

@end

