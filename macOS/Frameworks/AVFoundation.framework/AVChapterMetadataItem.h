//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVFoundation/AVMetadataItem.h>

@class AVChapterMetadataItemInternal;

__attribute__((visibility("hidden")))
@interface AVChapterMetadataItem : AVMetadataItem
{
    AVChapterMetadataItemInternal *_privChapter;
}

- (void)cancelLoading;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (void)_ensureValueLoadedSync;
- (void)_setValueStatus:(long long)arg1 figErrorCode:(int)arg2;
- (long long)_valueStatus;
- (BOOL)_valueForKeyDependsOnMetadataValue:(id)arg1;
- (long long)_chapterIndex;
- (long long)_chapterGroupIndex;
- (id)extraAttributes;
- (void)_takeValueFrom:(id)arg1;
- (id)dataType;
- (id)value;
- (id)startDate;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)time;
- (id)languageCode;
- (id)extendedLanguageTag;
- (id)locale;
- (id)keySpace;
- (id)commonKey;
- (id)key;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)_removeFigAssetNotifications;
- (void)_addFigAssetNotifications;
- (id)_initWithAsset:(id)arg1 chapterGroupIndex:(long long)arg2 chapterIndex:(long long)arg3 chapterType:(id)arg4 extendedLanguageTag:(id)arg5 languageCode:(id)arg6 chapterDataType:(id)arg7 time:(CDStruct_1b6d18a9)arg8 duration:(CDStruct_1b6d18a9)arg9;
- (id)init;

@end

