//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray *_entries;
    BOOL _flushEverything;
    BOOL _invalidateEverything;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL invalidateEverything; // @synthesize invalidateEverything=_invalidateEverything;
@property(nonatomic) BOOL flushEverything; // @synthesize flushEverything=_flushEverything;
- (void)tileset:(unsigned int *)arg1 edition:(unsigned int *)arg2 provider:(unsigned int *)arg3 invalidateOnly:(char *)arg4 atIndex:(unsigned long long)arg5;
- (unsigned long long)tilesetCount;
- (void)addTileset:(unsigned int)arg1 edition:(unsigned int)arg2 provider:(unsigned int)arg3 invalidateOnly:(BOOL)arg4;
- (id)init;

@end

