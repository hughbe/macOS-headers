//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmbeddedAcousticRecognition/NSCopying-Protocol.h>

@class NSArray;

@interface _EARCommandTaggingResult : NSObject <NSCopying>
{
    NSArray *_commandTaggings;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *commandTaggings; // @synthesize commandTaggings=_commandTaggings;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithCommandTaggings:(id)arg1;

@end

