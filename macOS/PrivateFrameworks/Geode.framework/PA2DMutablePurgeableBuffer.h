//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Geode/PA2DMutableBuffer.h>

@interface PA2DMutablePurgeableBuffer : PA2DMutableBuffer
{
}

- (id)description;
- (void)beginAccess:(struct PFIntRect_st)arg1 refillProcessor:(CDUnknownBlockType)arg2;
- (void)accessROI:(struct PFIntRect_st)arg1 refillProcessor:(CDUnknownBlockType)arg2 block:(CDUnknownBlockType)arg3;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithBacking:(id)arg1;

@end

