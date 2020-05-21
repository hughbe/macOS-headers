//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class QTCompressionOptionsInternal;

@interface QTCompressionOptions : NSObject
{
    QTCompressionOptionsInternal *_internal;
    long long _reserved;
}

+ (id)compressionOptionsWithIdentifier:(id)arg1;
+ (id)compressionOptionsIdentifiersForMediaType:(id)arg1;
+ (BOOL)_canUseCompressionOptionsWithDescription:(id)arg1 forVisibility:(unsigned long long)arg2;
+ (id)_compressionOptionsPropertyList;
+ (id)compressionOptionsWithDescription:(id)arg1;
- (id)localizedCompressionOptionsSummary;
- (id)localizedDisplayName;
- (id)mediaType;
- (BOOL)isEqualToCompressionOptions:(id)arg1;
- (id)init;

@end

