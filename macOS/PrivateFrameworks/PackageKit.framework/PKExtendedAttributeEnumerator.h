//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKExtendedAttributeEnumerator : NSObject
{
    NSString *_path;
    char *_nameBuffer;
    long long _nameBufferSize;
    char *_currentName;
    long long _currentByteOffset;
    int _options;
}

- (id)_dataForAttributeName:(char *)arg1;
- (void)rewindToBeginning;
- (id)nextAttribute;
- (void)dealloc;
- (id)initWithFileAtPath:(id)arg1 options:(int)arg2;

@end

