//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMFStringIndentation : HMFObject
{
    unsigned long long _width;
    unsigned long long _level;
}

+ (id)indentationWithWidth:(unsigned long long)arg1;
+ (id)indentation;
@property(readonly) unsigned long long level; // @synthesize level=_level;
@property(readonly) unsigned long long width; // @synthesize width=_width;
- (id)indentationByLevels:(long long)arg1;
- (id)description;
- (id)initWithWidth:(unsigned long long)arg1;
- (id)init;

@end

