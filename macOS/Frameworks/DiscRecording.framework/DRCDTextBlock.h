//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface DRCDTextBlock : NSObject
{
    void *_ref;
}

+ (id)cdTextBlockWithLanguage:(id)arg1 encoding:(unsigned long long)arg2;
+ (id)arrayOfCDTextBlocksFromPacks:(id)arg1;
+ (void)initialize;
+ (BOOL)isPropertyKey:(id)arg1;
+ (void)setupBindings;
- (unsigned long long)_cfTypeID;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (unsigned long long)flatten;
- (void)setObject:(id)arg1 forKey:(id)arg2 ofTrack:(unsigned long long)arg3;
- (id)objectForKey:(id)arg1 ofTrack:(unsigned long long)arg2;
- (void)setTrackDictionaries:(id)arg1;
- (id)trackDictionaries;
- (void)setProperties:(id)arg1;
- (id)properties;
- (id)init;
- (id)initWithLanguage:(id)arg1 encoding:(unsigned long long)arg2;
- (unsigned long long)encoding;
- (id)language;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_DiscRecording_KVCSetterPlaceholder:(id)arg1;
- (id)_DiscRecording_KVCGetterPlaceholder;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)validateValue:(id *)arg1 forKey:(id)arg2 error:(id *)arg3;

@end

