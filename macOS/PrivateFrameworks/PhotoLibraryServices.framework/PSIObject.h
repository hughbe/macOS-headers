//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface PSIObject : NSObject <NSCopying>
{
    NSMutableDictionary *_synonymsByOriginalWord;
    NSString *_uuid;
    NSArray *_tokens;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *tokens; // @synthesize tokens=_tokens;
@property(copy, nonatomic, setter=setUUID:) NSString *uuid; // @synthesize uuid=_uuid;
- (void)clear;
- (void)reverse;
- (void)enumerateSynonymsForOriginalContentString:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3;
- (void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;
- (void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForReverse;
- (id)initWithUUID:(id)arg1;
- (id)_initForCopy:(BOOL)arg1;

@end

