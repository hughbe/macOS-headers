//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (OSAKCDataExtension)
- (id)parent;
- (id)top;
- (id)pop;
- (void)push:(id)arg1;
- (void)addPart:(id)arg1;
- (id)section_pop;
- (void)section_push:(id)arg1;
- (void)sortByAddressAndSetInferredSizes;
- (void)addImageLegacy:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3 name:(const char *)arg4 path:(const char *)arg5 arch:(const char *)arg6;
- (void)addImage:(unsigned char [16])arg1 address:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void)addLine:(id)arg1;
@end

